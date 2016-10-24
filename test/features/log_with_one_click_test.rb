require 'test_helper'

class OneClickLogTest < ActionDispatch::IntegrationTest
  include ActiveJob::TestHelper

  test "log habit without any logs yet" do
    habit = habits(:litter)

    visit habits_path
    assert page.has_content? habit.name

    find_button(id: "button-#{habit.id}").click

    # log date should be shown on page
    assert page.has_content?  Date.today.to_s
    # habit should have last log date
    assert_equal Date.today, habit.last_log_date
  end
end
