class CreateLogEntries < ActiveRecord::Migration[5.0]
  def change
    create_table :log_entries do |t|
      t.references :habit, foreign_key: true
      t.date :date
      t.text :note

      t.timestamps
    end
  end
end
