/*
    Delegating Constructors
    Author: Sebastian Sroczyk
    Date: 01/09/2024
*/

#include <string>
#include <iostream>

/*
    Often the code for constructors is very similar, Duplicated code can lead to errors. This is why C++ allows delegating constructors.
    
    Delegating Constructors:
        - Code for one constructor can call another in the initialization list
        - Avoids Duplicating code
    
        Example of Delegating Constructors:

            Player::Player(std::string name_val, int health_val, int xp_val)
                : name{name_val}, health{health_val}, xp{xp_val}{
                }
            Player::Player()
                : Player {"None", 0, 0}{
                }
            Player::Player(Std::string name_val)
                : Player{name_val, 0, 0}{
                } 
        
        NOTE: You CANNOT call other constructors from the body of the delegating constructor, also you can't delegate to another constructor
              and provide initialization values to class members

*/

#include "Player.h"

int main(){

    Player Seba;
    Player Kinga{"Kinga"};
    Player Bob{"Bob", 20};
    Player Dave{"Dave", 100, 22};

    Player *Sebastian = new Player("Sebastian");
    Sebastian->speak("This is pretty cool");
    delete Sebastian;
    
    // NOTE: When a delegate is called, the body of that constructor is called as well as the previous constructor's body that did the calling. 

    return 0;
}