/*
    Constructor Parameters and Default Values PLAYER CLASS
    Author: Sebastian Sroczyk
    Date: 02/09/2024
*/

#include "Player.h"

void Player::display_stats(){
    std::cout << name <<": Health:"<< health << " Xp:"<< xp << std::endl; 
}

void Player::speak(std::string text_to_speak){
    std::cout << name + ": " << text_to_speak << std::endl; 
}

// Delegating Constructor
Player::Player(std::string set_name, int set_health, int set_xp) 
    : name{set_name}, health{set_health}, xp{set_xp} {
        std::cout << "\n3 args constructor called\n" << std::endl;
}

// Destructor
Player::~Player(){
    std::cout << "\nDestructor Called for: " << name << std::endl;
}
