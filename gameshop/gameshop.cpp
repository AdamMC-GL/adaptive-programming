#include <string>
#include "gameshop.hpp"
using namespace std;

Game::Game()
{

}

Game::Game(string name, int releaseYear, float price)
{
    this->name = name;
    this->releaseYear = releaseYear;
    this->price = price;
    currentPrice = price;

}

double Game::current_price(){
    currentPrice = price;
    for(unsigned int i = releaseYear; i < 2022; i++){
        currentPrice = currentPrice - (currentPrice / 100 * 30);
    }
    return currentPrice;
}

Person::Person()
{
    owned_games = { };
}
Person::Person(string name, float budget)
{
    this->name = name;
    this->budget = budget;

}

string Person::buy(Game game){
    for(unsigned int i = 0; i < owned_games.size(); i++){
        if (game.name == owned_games[i].name){
            return "Failed";
        }
    }
    if(game.current_price() > budget){
        return "Failed";
    }

    budget = budget - (game.current_price());
    owned_games.push_back(game);
    return "Success";
}

string Person::sell(Game game, Person & buyer){

    for(unsigned int j = 0; j < buyer.owned_games.size(); j++){
        if (game.name == buyer.owned_games[j].name){
            return "Failed";
        }
    }
    if(game.current_price() > buyer.budget){
        return "Failed";
    }
    for(signed int i = 0; i < owned_games.size(); i++){
        if (game.name == owned_games[i].name){
            buyer.budget = buyer.budget - game.current_price();
            budget = budget + game.current_price();
            buyer.owned_games.push_back(game);
            owned_games.erase(owned_games.begin() + i);
            return "Success";
        }
    }
    return "Failed";
}

string Person::toString(){
    string str = name + "'s budget is " + to_string(budget).substr(0, 5) + ",- and owns: \n";
    for(unsigned int i = 0; i < owned_games.size(); i++){
        str += owned_games[i].name + ", released " + to_string(owned_games[i].releaseYear) + " original price: " + to_string(owned_games[i].price).substr(0,5) + ",- now: " + to_string(owned_games[i].current_price()).substr(0,5)+",- \n";
    }
    return str;
}



