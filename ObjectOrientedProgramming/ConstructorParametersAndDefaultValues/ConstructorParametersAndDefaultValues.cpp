/*
    Constructor Parameters and Default Values
    Author: Sebastian Sroczyk
    Date: 01/09/2024
*/

#include <iostream>
#include <string>

/*
    Default Constructor Parameters:

        - Can be used to simplify our code and reduce the number of overloaded construcotrs.
        - Same Rules apply as we learned with non-member functions.

        Example Of Default Constructor Parameters:

            class Player{
                private:
                    std::string name;
                    int health;
                    int xp;
                public:
                // Constructor with default parameter values;
                Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
            };

        NOTE: When using a constructor with default values, we must be sure we don't declare a ambigious constructor. I.e. Another constructor doing the same exact job.
              This would result in the compiler not knowning which constructor to use causing an error.

*/

#include "Player.h"

int main(){

    Player empty;
    Player Sebastian{"Sebastian"};
    Player Kinga {"Kinga", 10};
    Player Bob {"Bob", 100, 200};

    empty.display_stats();
    Sebastian.display_stats();
    Kinga.display_stats();
    Bob.display_stats();

    Player *Ruben = new Player("Ruben", 100, 21);
    Ruben->display_stats();


    delete Ruben;
    return 0;
}