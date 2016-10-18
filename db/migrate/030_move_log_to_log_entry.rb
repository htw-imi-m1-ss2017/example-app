class MoveLogToLogEntry < ActiveRecord::Migration[5.0]

  def up
    Habit.all.each do |habit|
      if habit.last
        habit.log_entries.create!(date: habit.last)
      end
    end
    remove_column :habits, :last
  end

  def down
    add_column :habits, :last
    Habit.all.each do |habit|
      last_log = habit.log_entries.order("date desc").first
      habit.last = last_log.date
      habit.save!
    end
  end
end
