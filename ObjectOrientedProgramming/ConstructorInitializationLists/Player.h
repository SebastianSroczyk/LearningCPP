/*
    Constructors and Destructors HEADER FILE
    Author: Sebastian Sroczyk
    Date: 01/09/2024
*/

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include<string>
#include<iostream>

class Player{

    private:
        std::string name;
        int health;
        int xp;
    public:
        // Method Prototype
        void set_name(std::string name_val);
        void speak(std::string text_to_speak);

        // Default Constructor Prototype
        Player();
        //Overloaded Constructor Prototype
        Player(std::string set_name, int set_health, int set_xp);
        // Destructor Prototype
        ~Player();
};

#endif