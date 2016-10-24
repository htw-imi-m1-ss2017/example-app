class Habit < ApplicationRecord
  has_many :log_entries, dependent: :destroy

  def last_log_date
    last_log = log_entries.order("date desc").first
    last_log ? last_log.date : nil
  end

  def last_log_date= the_date
    log_entries << LogEntry.create(date: the_date)
  end

end
