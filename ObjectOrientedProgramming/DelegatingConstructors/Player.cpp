/*
    Delegating Constructors PLAYER CLASS
    Author: Sebastian Sroczyk
    Date: 01/09/2024
*/

#include "Player.h"

void Player::set_name(std::string name_val){
            name = name_val;
}

void Player::speak(std::string text_to_speak){
    std::cout << name + ": " << text_to_speak << std::endl; 
}

// Delegating Constructor (Also Default)
Player::Player() 
    : Player {"Not Defined", 0, 0} {
        std::cout << "\nNo args default constructor called" << std::endl;
}

// Delegating Constructor
Player::Player(std::string set_name)
    : Player {set_name,0,0}{
        std::cout << "\n1 args constructor called" << std::endl;
}

// Delegating Constructor
Player::Player(std::string set_name, int set_health)
    : Player {set_name, set_health, 0}{
        std::cout << "\n2 args constructor called" << std::endl;
}

// Delegating Constructor
Player::Player(std::string set_name, int set_health, int set_xp) 
    : name{set_name}, health{set_health}, xp{set_xp} {
        std::cout << "\n3 args constructor called" << std::endl;
}

// Destructor
Player::~Player(){
    std::cout << "\nDestructor Called for: " << name << std::endl;
}
