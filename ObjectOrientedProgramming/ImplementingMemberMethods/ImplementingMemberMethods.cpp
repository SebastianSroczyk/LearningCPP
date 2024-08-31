/*
    Implementing Member Methods
    Author: Sebastian Sroczyk
    Date: 31/08/2024
*/

#include <iostream>
#include <string>
#include <vector>

/*

    Implementing Memeber Methods is simular to how we implement functions, In some cases Member methods are easier as they have access to other memeber,
    so we don't need to pass in so many arguments.  

    There are 3 ways Methods can be implemented:

        - Inside the class, which is known as Inline Implementaion

        - Outside the Class
        
        - Using a header (.h file)

    Inside the Class implementation allows for easier understanding, but can be more difficult to manage 
    when the class is too big.

    Outside the Class implementation, requires a better understanding of the structure of the program, 
    but allows easier managment/maintanence of the program.

    Using Header Files, is mainly used for really big programs. This allows us to break down a class into multiple files.


    Example of Inside Class Implementation:

    class Player{
    private:

        std::string name;
        int health;
        int xp;
    
    public:

        // Fully Implemented Methods!
        void speak(std::string text_to_speak){
            std::cout << name + ": " + text_to_speak << std::endl;
        }
        
        bool is_dead(){
            if(health < 0){
                return true;
            }
            else{
                return false;
            }
        }
    };

    Example of Outside Class Implementation:

        class Player{
        private:
            std::string name;
            int health;
            int xp;
    
        public:
            // These are only Protoypes!
            speak(std::string text_to_speak);
            is_dead();
        
        };

        // Fully Implemented Methods with 'Player::' Prefix, this lets the complier know, these functions are part of the Player class

        void Player::speak(std::string text_to_speak){
            std::cout << name + ": " + text_to_speak << std::endl;
        }
        
        bool Player::is_dead(){
            if(health < 0){
                return true;
            }
            else{
                return false;
            }
        }
    

    For Significantly Bigger Files we have another methods of Impementing Using Header files:

    // NOTE: The name of this file (\/) is Player.h 

        // This is known as a Include guard, It prevents the complier throwing an error, if the header file is called to more than one cpp file,
        // by executing this file only once.
        #ifndef _PLAYER_H_  // Checks IF _PLAYER_H_ NOT DEFINED 
        #define _PLAYER_H_  // DEFINES _ PLAYER_H_

        class Player{
        private:
            std::string name;
            int health;
            int xp;
    
        public:
            void speak(std::string text_to_speak);
            bool is_dead();
        
        };
        #endif  // IF defined already skips definition and comes to here

        // NOTE: some compilers can use '#Pragma Once' this is also a Include guard and works the same but not all compilers allow the use of this.

    // NOTE: The name of this file (\/) is Player.cpp

        #include "Player.h"

        void Player::speak(std::string text_to_speak){
            std::cout << name + ": " + text_to_speak << std::endl;
        }
        
        bool Player::is_dead(){
            if(health < 0){
                return true;
            }
            else{
                return false;
            }
        }

        NOTE: #include<> - Is used only to include system header files, while #include " " - Tells the compiler to include header files that are local to the project.
              Both of which the compiler knows the location of.
        
    // NOTE: The name of this file (\/) is main.cpp

        #include <iostream>
        #include "Player.h"

        int main(){

            Player Sebastian;

            Sebastian.is_dead();
            Sebastian.speak("Hello Guys!");

            return 0;
        }
    
*/

class Player{
    private:
        std::string name{"Sebastian"};
        int health{77};
        int xp{142};
    
    public:
        // These are only Protoypes!
        void speak(std::string text_to_speak){
            std::cout << name + ": " + text_to_speak << std::endl;
        }
        bool is_dead(){
            if(health < 0){
                return true;
            }
            else{
                return false;
            }
        }
        
};

class Enemy{
    private:
        std::string name {"Bob"};
        int health{55};
        int xp{32};
    
    public:
        // These are only Protoypes!
        void speak(std::string text_to_speak);
        bool is_dead();
        
};

void Enemy::speak(std::string text_to_speak){
    std::cout << name + ": " + text_to_speak << std::endl;
}
bool Enemy::is_dead(){
    if(health < 0){
        return true;
    }
    else{
        return false;
    }
}

#include "Princess.h"

int main(){
    Player Sebastian;
    Enemy Bob;
    Princess Kinga;

    Sebastian.speak("Hello!");
    Bob.speak("I will destory you!");
    Kinga.speak("Nooo!");
    
    
    return 0;
}

