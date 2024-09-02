/*
    Constructor Parameters and Default Values HEADER
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
        void display_stats();
        void speak(std::string text_to_speak);

        //3 args Overloaded Constructor Prototype with default values (acts like 0, 1, 2 and 3 args constructor)
        Player(std::string set_name = "None", int set_health = 0, int set_xp = 0);
        // Destructor Prototype
        ~Player();
};

#endif