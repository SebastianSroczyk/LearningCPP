/*
    Constructors and Destructors PLAYER CLASS
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
