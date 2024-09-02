/*
    Copy Constructors 
    Author: Sebastian Sroczyk
    Date: 01/09/2024
*/

#include <iostream>
#include <string>

/*
    When Obejcts are copied, C++ must create a new object from an existing object.

    When is a Copy Obejct created?
        - Passing object by value as a parameter
        - Returning an object from a function by value
        - Constructing one object based on another of the same class
    
    C++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if you don't.

    Use Cases where a copy constructor is used:

        USE CASE 1: Pass Object By Value
            Player hero {"Hero", 100, 200};

            void display_player (Player p){
                // p is a copy of hero in this example
                // use p
                // Destructor for p will be called
            }

            display_player(hero);

        NOTE: The default way for c++ to pass data is by value, this means a copy of the data is made.

        USE CASE 2: Return object by value

            Player enemy;

            Player create_super_enemy(){
                Player an_enemy{"Super Enemy", 1000, 1000};
                return an_enemy; // A COPY of an_enemy is returned
            }

            enenmy = create_super_enemy();

        USE CASE 3: Construct one object based on another

            Player hero {"Hero", 100, 100};

            layer another_hero {hero}; // A Copy of hero is made

    If you don't provide your own way of copying objects by value then the compiler provides a default way of copying objects.
    It copies the values of each data memebr to the new object, this is known as default memberwise copy.

    This is perfectly fine in many case, but beware if you have a pointer data member, pointer will be copied, not what it is pointing to.

    Best Practices:

        - Provide a copy constructor when your class has raw pointers members
        - Provide the copy const reference parameter
        - Use STL classes as they are already provide copy constructors
        - Avoid using raw pointer data members if possible

    Declaring the Copy Constructor Protptype Examples:

        Type::Type(const Type &source);

        Player::Player(const Player &source);

        Account::Account(const Account &source); 

    NOTE: We pass by reference as passing by value would defeate the purpose of the Copy constructor, and we would end up with never ending recursive calls

    Implementing the Copy Constructor:

        Type::Type(const Type &source){
            // code or initialization list to copy the object
        }

        Player::Player(const Player &source)
            : name{source.name}, health{source.health}, xp {source.xp}{
        }
*/

#include "Player.h"

void display_player(Player p){
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "Xp: " << p.get_xp() << std::endl;
}

Player create_super_enemy(){
    Player an_enemy{"Super Enemy", 1000, 1000};
    return an_enemy; // A COPY of an_enemy is returned 
}

int main(){
    
    // Pass Object By Value
    Player Sebastian{"Sebastian", 100 , 200};

    display_player(Sebastian);

    // Construct one object based on another
    Player my_new_object {Sebastian};

    // Returning object by value
    create_super_enemy();


    return 0;
}

