/*
    Class Access Modifiers
    Author: Sebastian Sroczyk
    Date: 31/08/2024
*/

#include <iostream>
#include <string>
#include <vector>

/*

    There are 3 Class Access Modifiers:

        - Public
        - Private
        - Protected

        Public Access Modifier:
            - Can be accessed anywhere
            - Isn't safe to use, because it can be accessed anywhere

        Private Access Modifier:
            - Can ONLY be accessed by memebers or friends of a class

        Protected Access Modifier:
            - Used with inheritance, Allows Access to Parent class from a child class.

    Decleration of Access Modifers Example:

        class Player{
        
        private:
            std::string name;
            int health;
            int xp;
        
        public:

            speak(std::string text_to_speak);
            isDead();
        }

        We use Access modifier to restrict what can be accessed. Example:

            We WANT the player to be able to speak (Public), but we DON'T want the player to change their
            health to 1000(Private).

        NOTE: Trying to access a memeber that is private outside of it's scope will result in a complier error

    

*/

class Player{

private:
    // attributes
    std::string name {"Why can this be a name?"};
    int health {55};
    int xp {80};

public:
    // methods
    void set_name(std::string name_changed) {name = name_changed;}
    void set_health(int health_changed) {health = health_changed;}
    void set_xp(int xp_changed) {xp = xp_changed;}
    void talk(std::string text_to_Speak) {std::cout << name + ": " + text_to_Speak << std::endl;}
    bool is_dead();

    
};


int main(){

    
    Player Sebastian;

    // We can still change name,health and Xp, but this time we need to make new methods that are public,
    // these methods have access to the private memebers of the class as they are inside the classes scope.
    // We don't have access to the private memebers as we are outside of their scope.

    Sebastian.set_name("Sebastian");
    Sebastian.set_health(150);
    Sebastian.set_xp(300);

    Sebastian.talk("Hey guys");

    
    Player *Kinga {nullptr};

    Kinga = new Player();

    Kinga->set_name("Kinga");
    Kinga->set_health(100);
    Kinga->set_xp(77);

    Kinga->talk("Hi");

    delete Kinga;
    return 0;
}