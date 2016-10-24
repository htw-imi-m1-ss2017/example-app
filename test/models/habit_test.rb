require 'test_helper'

class HabitTest < ActiveSupport::TestCase
  setup do
    @habit = habits(:walk)
  end
  test "make sure association works here" do
    assert_equal 1, @habit.log_entries.size
    assert_equal Date.new(2016,10,17), @habit.last_log_date
  end
end
