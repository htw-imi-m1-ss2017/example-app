Rails.application.routes.draw do
  resources :habits
  # For details on the DSL available within this file, see http://guides.rubyonrails.org/routing.html
  get '/habits/:id/log', to: 'habits#log', as: "log"
end
