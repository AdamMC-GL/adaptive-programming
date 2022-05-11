#include "gameshop.hpp"

using namespace std;
int main()
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t); //http://cplusplus.com/forum/beginner/32329/

    int releaseDate1 = timePtr->tm_year + 1900 - 1;
    int releaseDate2 = timePtr->tm_year + 1900 - 2;

    Game g1 = {"Just Cause 3", releaseDate1, 49.98};
    Game g2 = {"Need for Speed: Rivals", releaseDate2, 45.99};
    Game g3 = {"Need for Speed: Rivals", releaseDate2, 45.99};

    Person p1 = {"Eric", 200};
    Person p2 = {"Hans", 55};
    Person p3 = {"Arno", 185};

    cout << "p1 buys g1: " << p1.buy(g1) << endl;
    cout << "p1 buys g2: " << p1.buy(g2) << endl;
    cout << "p1 buys g3: " << p1.buy(g3) << endl;
    cout << "p2 buys g2: " << p2.buy(g2) << endl;
    cout << "p2 buys g1: " << p2.buy(g1) << endl;
    cout << "p2 buys g3: " << p3.buy(g3) << endl << endl;

    cout << p1.toString() << endl;
    cout << p2.toString() << endl;
    cout << p3.toString() << endl;

    cout << "p1 sells g1 to p3: " << p1.sell(g1, p3) << endl;
    cout << "p2 sells g2 to p3: " << p2.sell(g2, p3) << endl;
    cout << "p2 sells g1 to p1: " << p2.sell(g1, p1) << endl << endl;

    cout << p1.toString() << endl;
    cout << p2.toString() << endl;
    cout << p3.toString() << endl;
}