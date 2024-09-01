/*
    Constructors and Destructors
    Author: Sebastian Sroczyk
    Date: 01/09/2024
*/

#include <iostream>
#include <string>

/*
    Constructors:   
        - Special member method
        - Invoked during object creation
        - Useful for initialization
        - Same name as the class
        - No return type is specified
        - Can be overloaded
        - Each new constructor must have a unique signature!

        Example of a constructor for a Player class:

            class Player{
            private:
                std::string name;
                int health;
                int xp;
            public:
                // Overlaoded Constructors
                Player();                   // no args constructor 
                Player(std::string name);
                Player(std::string name, int health, int xp);

            };

    Destructors:
        - special member method
        - Sname name as the class, but proceeded with a tilde (~)
        - Invoked automatically when an object is destoryed
        - No return type and no parameters
        - Only 1 destructor is allowed per class - cannot be overloaded
        - Useful to release memory and other resources

        Example of a Destructor for a Player class:

            class Player{
            private:
                std::string name;
                int health;
                int xp;
            public:
                Player();                   
                Player(std::string name);
                Player(std::string name, int health, int xp);
                // Destructor
                ~Player();
            };
    
    Creating Objects:

        {

            Player dog;
            Player jim {"jim", 100, 4};
            Player man {"man"};
            Player bob {"bob"};
                // Objects are used    
        }    // 4 destructors called automatically as Objects are out of scope

        Player *enemy = new Player("Enemy", 50, 20);
        delete enemy; // Destructor called

    NOTE: if no constructors and/or destructors are provided C++ will automatically create an empty constructor and/or an enmpty destructor
*/

#include "Player.h"

int main(){

    Player Seba;
    Player Kinga{"Kinga"};
    Kinga.set_name("Kinga");
    Player Ruben{"Ruben", 100, 21};
    Ruben.set_name("Ruben");

    // Output:
    /*
        No args constructor called
        Name constructor called
        Name, Health and Xp constructor called
        Destructor Called for: Ruben
        Destructor Called for: Kinga
        Destructor Called for:
    */
    // NOTE: Destructor works in the reverse order in which the constructors were called.

    Player *enemy = new Player();
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 555);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss; 

    //Output:
    /*  
        No args constructor called
        Name, Health and Xp constructor called  
        Destructor Called for: Enemy
        Destructor Called for: Level Boss
    */
    // NOTE: Destructors Destoryed Enemy first only becuase we told it to do that, using "delete enemy;"

    return 0;
}