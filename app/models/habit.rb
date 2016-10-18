class Habit < ApplicationRecord
  has_many :log_entries

  def last_log_date
    last_log = log_entries.order("date desc").first
    last_log ? last_log.date : nil
  end

end
