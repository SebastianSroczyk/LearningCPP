/*
    Implementing Member Methods
    Author: Sebastian Sroczyk
    Date: 31/08/2024
*/

// Header File

#ifndef _PRINCESS_H_
#define _PRINCESS_H_

#include <string>
#include <iostream>

class Princess{

private:
    std::string name {"Kinga"};
    int health {100};
    
public:
    void speak(std::string text_to_speak);
    bool is_dead();

};

#endif