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

        // Overloaded Constructors:
        Player(){
            std::cout << "No args constructor called" << std::endl;
        }
        Player(std::string name){
            std::cout << "Name constructor called" << std::endl;
        }
        Player(std::string name, int health, int xp){
            std::cout << "Name, Health and Xp constructor called" << std::endl;
        }

        // Destructor
        ~Player(){
            std::cout << "Destructor Called for: " << name << std::endl;
        }
};

#endif