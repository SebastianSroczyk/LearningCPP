/*
    Constructor Initialization Lists PLAYER CLASS
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

Player::Player() 
    : name{"Not Defined"},health {0},xp{0} {
        std::cout << "\nNo args default constructor called" << std::endl;
}
        
Player::Player(std::string set_name, int set_health, int set_xp) 
    : name{set_name}, health{set_health}, xp{set_xp} {
    std::cout << "\nName, Health and Xp constructor called" << std::endl;
}

Player::~Player(){
            std::cout << "\nDestructor Called for: " << name << std::endl;
        }
