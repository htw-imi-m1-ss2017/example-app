Rails.application.routes.draw do

  root 'habits#index'
  get '/habits/:id/log', to: 'habits#log', as: "log"

  resources :habits
  resources :log_entries
  
end
