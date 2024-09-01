/*
    Constructors and Destructors
    Author: Sebastian Sroczyk
    Date: 01/09/2024
*/

#include <iostream>
#include <string>

/*
    So far all of the data has been set in the constructor body, this isn't really initialization as memebrs already exist by the time
    we run the constructor. So far we have been assigning values to members not initialising the member with a value.


    Constructor Initialization Lists:
        - Are more efficient
        - Initialization list immediately follows the parameter list
        - Initializes the data member as the object is created!
        - Order of initialization is the order of declaration in the class

        Example of Constructor Initialization Lists:

            class Player{
                private:
                    // attributes go here
                public:

                    // better way
                    Player()
                        :name{"None"}, health{0}, xp{0} {
                        // Other constructor stuff here
                    }
            }

        NOTE: The list is before the first "{", which allows the true initialization before the body of the constructor is executed.
              Also the order in which the data members are initialized is not necessarily the order we provide in the initialization list,
              the data members are initialized in the order that they were declared in the class decleration.

*/

#include "Player.h"

int main(){

    Player unknown;
    unknown.speak("WHAT! A MORE EFFICIENT WAY OF INITIALIZING!");

    Player Sebastian("Sebastian", 100, 20);
    Sebastian.speak("Yeah this is kinda crazy!");

    Player *Kinga = new Player("Kinga", 200, 303);
    Kinga->speak("What is happening?");

    Sebastian.speak("Things...");


    delete Kinga;
    return 0;
}