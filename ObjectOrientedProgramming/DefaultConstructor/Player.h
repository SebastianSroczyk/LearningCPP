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

        void set_name(std::string name_val);
        void speak(std::string text_to_speak);

        // Default Constructor
        Player(){
            name = "Not Defined";
            health = 0;
            xp = 0;

            std::cout << "No args default constructor called" << std::endl;
        }
        //Overloaded Constructor
        Player(std::string set_name, int set_health, int set_xp){
            name = set_name;
            health = set_health;
            xp = set_xp;
            
            std::cout << "Name, Health and Xp constructor called" << std::endl;
        }

        // Destructor
        ~Player(){
            std::cout << "Destructor Called for: " << name << std::endl;
        }
};

#endif