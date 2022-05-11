#include <iostream>
#include <vector>
using namespace std;

class Game
{
public:
    string name;
    int releaseYear;
    float price;
    float currentPrice;

    Game();
    Game(string name, int releaseYear, float price );
    double current_price();
};


class Person{
public:
    string name;
    float budget;
    vector<Game> owned_games;

    Person();
    Person(string name, float budget);
    string buy(Game game);
    string sell(Game game, Person & buyer);
    string toString();
};


