/*
    Classes and Objects
    Author: Sebastian Sroczyk
    Date: 30/08/2024
*/

#include <iostream>
#include <string>
#include <vector>

/*
    Classes:
        - Blueprint from which objects are created
        - User-defined data-types
        - Has attributes (data)
        - Has methods (Functions)
        - Can hide data and methods
        - Provides a public interface

        Class Examples:
            - Account
            - Employee
            - Image
            - std:vector
            - std::string

    Object:
        - Created from a class
        - Represents a specific instance of a class
        - Can create many, many objects
        - Each has its own identiy
        - Each can use the defined class methods

        Account Object Example:
            - Sebastian's Account is an instance of an Account
            - Rubens's Account is an instance of an Account
            - Each has its own balance, can make deposits, withdrawals etc.

    Class Decleration:

        class Class_Name{
    
            Decleration(s)
        };

        NOTE: The firs letters of the class are capitilized.

        Here is an example of a potentual Player Class:

        class Player{

            // Attributes
            std::string name;
            int health;
            int xp;

            // Methods
            void talk(std::string text_to_say);
            bool is_dead();

        };
        
        NOTE: This way of declairing Dunctions inside a class only works with C++ and other languages that support encapsulation.

    Object Decleration:

        // Simple decleration
        Player Sebastian;
        Player Hero;

        // Decleration & Deletion of a object on the HEAP
        Player *enemy = new Player();
        delete enemy;
    
    
    We can use classes just like any other data type, here is an example of the class being used in an array and vector. 
    This Example uses the previouly declaired Player class:

        // Decleration
        Player player_one;
        Player player_two;

        // Array of Player 's
        Player player_arr{player_one, player_two};

        // Vecots containing player_one
        std::vector<Player> players {player_one};

        // Adding to players player_two
        players.push_back(player_two);

    
*/

// using namespace std; // Don't use std too much, we need to specific what we are using. Use Scope Resolution Operator (::)

// NOTE: Better way of class decleration will be used later

class Player{

    // attributes
    std::string name {"Why can this be a name?"};
    int health {55};
    int xp {80};

    // methods
    void talk(std::string text_to_Speak);
    bool is_dead();

    // NOTE: These methods are only prototypes and program will break if used as the methods have not been declaired.
};

int main(){
    Player Sebastian;
    Player Kinga;

    Player players[] {Sebastian, Kinga};

    std::vector<Player> player_vec {Sebastian};
    player_vec.push_back(Kinga);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}

// C++ 11 and up allows initilization of classes. Works simular to how a default constructor would work, but it doesn't make sense as no objects exist yet.