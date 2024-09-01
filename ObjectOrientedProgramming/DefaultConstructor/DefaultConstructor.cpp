/*
    Default Constructor
    Author: Sebastian Sroczyk
    Date: 01/09/2024
*/

#include <iostream>
#include <string>

/*
    Default Constructor:
        - Does not expect ant arguments also called an no-args constructor
        - If you write no constructors at all for a class, C++ will generate a defualt constructor that does nothing
        - It is called when you instantiate a new object with no arguemnts

        Example:

            Player Sebastian;
            Player *Other = new Player;

    Eaxmple of a User-defind no-args Constructor:

        class Player{
        
        public:
            std:string name;
            int health;
            int xp;
        private:
            // Default Constructor
            Player(){
                name = "Not Defined!";
                health = 0;
                xp = 0;
            }
            void speak(std::string text_to_speak);
            bool is_dead();
        };

        NOTE: If a constructer is provided, no matter if its a default or not, C++ will NOT generate a default constructor.
              Otherwise a default constructer is automatically provided by C++.
*/

#include "Player.h"

int main(){

    Player Sebastian; 
    
    Sebastian.speak("\nI am the one.");
    Sebastian.set_name("Not Sebastian");
    Sebastian.speak("I am the one. *in a different voice*\n");
    
    Player Kinga{"Kinga", 100, 200};
    Kinga.speak("Nah I am.\n");

    // Bob being constructed on the HEAP
    Player *Bob = new Player("Bob", 500, 1000);
    Bob->speak("YOU ARE NO-ONE COMPARED TO ME!\n");

    delete Bob;    
    return 0;
}