require 'test_helper'

class HabitTest < ActiveSupport::TestCase
  setup do
    @habit = habits(:walk)
    @habit2 = habits(:litter)
  end

  test "make sure association works here" do
    assert_equal 1, @habit.log_entries.size
    assert_equal Date.new(2016,10,17), @habit.last_log_date
  end

  test "habit can be logged" do
    @habit2.last_log_date = Date.yesterday
    assert_equal Date.yesterday, @habit2.last_log_date
  end

  test "habit keeps a history of log dates" do
    @habit2.last_log_date = Date.yesterday
    @habit2.last_log_date = Date.today
    @habit2.last_log_date = Date.yesterday-1

    assert_equal 3, @habit2.log_entries.size
  end

  test "last_log_date returns the most recent log" do
    @habit2.last_log_date = Date.yesterday
    @habit2.last_log_date = Date.today
    @habit2.last_log_date = Date.yesterday-1

    assert_equal Date.today, @habit2.last_log_date
  end

end
