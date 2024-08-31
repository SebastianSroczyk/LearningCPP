/*
    Implementing Member Methods
    Author: Sebastian Sroczyk
    Date: 31/08/2024
*/

// Class File

#include "Princess.h"

void Princess::speak(std::string text_to_speak){
    std::cout << name + ": " + text_to_speak << std::endl;
}

bool Princess::is_dead(){
    if(health < 0){
        return true;
    }
    else{
        return false;
    }
}