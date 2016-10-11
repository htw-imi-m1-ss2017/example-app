class CreateHabits < ActiveRecord::Migration[5.0]
  def change
    create_table :habits do |t|
      t.string :name
      t.integer :frequency
      t.date :last
      t.text :description

      t.timestamps
    end
  end
end
