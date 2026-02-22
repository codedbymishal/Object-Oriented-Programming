#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class hittinggame
{
private:
    int players;
    int myhits, enemyhits;

public:
    hittinggame()
    {
        srand(time(0)); //seeds the random number generator
        players = rand() % 5 + 1; // 1–5 players
        myhits = 0;
        enemyhits = 0;
    }
    void playgame()
    {
        int a, b;
        cout << "Total number of players in your team: " << players << endl << endl;
        for (int i = 1; i <= players; i++) //loops equal to the number of players
        {
            a = rand() % 10; //num1
            b = rand() % 10; //num2
            cout << "Pair of numbers:" << endl;
            cout << "Number 1: " << a << endl;
            cout << "Number 2: " << b << endl;
            if (a == b)
            {
                cout << "Enemy got hit by your team!" << endl;
                myhits++;
            }
            else
            {
                cout << "You got hit by the enemy team!" << endl;
                enemyhits++;
            }

            cout << endl;
        }

        cout << "\nFinal Result:" << endl;
        cout << "Your Team Hits: " << myhits << endl;
        cout << "Enemy Team Hits: " << enemyhits << endl;

        if (myhits > enemyhits)
            cout << "Your team won!!" << endl;
        else if (enemyhits > myhits)
            cout << "Enemy team won!!" << endl;
        else
            cout << "Match Draw!!" << endl;
    }
};
int main()
{
    hittinggame game;
    game.playgame();
    return 0;
}
