/*
    Copy Constructors PLAYER CLASS
    Author: Sebastian Sroczyk
    Date: 02/09/2024
*/

#include "Player.h"

void Player::speak(std::string text_to_speak){
    std::cout << name + ": " << text_to_speak << std::endl; 
}

//3 args Constructor Prototype with default values (acts like 0, 1, 2 and 3 args constructor)
Player::Player(std::string set_name, int set_health, int set_xp) 
    : name{set_name}, health{set_health}, xp{set_xp} {
        std::cout << "\n3 args constructor called\n" << std::endl;
}

// Copy Constructor
Player::Player(const Player &source)
    : name{source.name + " - Copy"}, health{source.health}, xp{source.xp}{
        std::cout << "Copy Constructor - Made a copy of: " << source.name << std::endl;
}

// Destructor
Player::~Player(){
    std::cout << "\nDestructor Called for: " << name << std::endl;
}
