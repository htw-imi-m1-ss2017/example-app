# This file should contain all the record creation needed to seed the database with its default values.
# The data can then be loaded with the rails db:seed command (or created alongside the database with db:setup).
#
# Examples:
#
#   movies = Movie.create([{ name: 'Star Wars' }, { name: 'Lord of the Rings' }])
#   Character.create(name: 'Luke', movie: movies.first)
Habit.delete_all
Habit.create(name: "Learn Vocabulary", frequency: 1, description: "Study English Vocabulary with Flash Cards",last_log_date: Date.today-1)
Habit.create(name: "Buy Milk", frequency: 3, description: "Buy fresh milk",last_log_date: Date.today-4)
Habit.create(name: "Read the Newspaper", frequency: 31, description: "Read at least a part",last_log_date: Date.today)
Habit.create(name: "Clean Bathroom", frequency: 7, description: "Clean the bathroom",last_log_date: Date.today-7)
Habit.create(name: "Buy Bread", frequency: 7, description: "Buy fresh Bread",last_log_date: Date.today-2)
