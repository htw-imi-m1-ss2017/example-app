json.extract! habit, :id, :name, :frequency, :last, :description, :created_at, :updated_at
json.url habit_url(habit, format: :json)