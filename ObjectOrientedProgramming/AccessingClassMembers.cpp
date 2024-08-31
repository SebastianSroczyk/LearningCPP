/*
    Accessing Class Members
    Author: Sebastian Sroczyk
    Date: 30/08/2024
*/

#include <iostream>
#include <string>
#include <vector>

/*
    What is a class memebr:
        - A class member is either an attribute or method a class possesses.

    We can access:
        - Class attributes
        - Class methods
    
    Some class members will not be accessable (restrictions will be used later)
    We need an object to access instance variables.

    There are 2 ways of accessing memebers:
        - Dot operator (i.e. . like in .push_back)
        - Memeber Of Pointer Operator (aka arrow operator i.e. -> )

    Example of Dot Operator being used:

        Account bank_acc;

        bank_acc.balance();
        bank_acc.withdraw(50);

    Example of Memeber Of Pointer Operator:

        Account *bank_acc = new Account();

        bank_acc->balance();
        bank_acc->withdraw(50);

    NOTE: Memeber Of Pointer is only used when we have a pointer to a class. This operator works exactly like the dot operator, 
          it derefrences the pointer then applies the dot operator.

*/

class Player{

public:
    // attributes
    std::string name {"Why can this be a name?"};
    int health {55};
    int xp {80};

    // methods
    void talk(std::string text_to_Speak) {std::cout << name + ": " + text_to_Speak << std::endl;}
    bool is_dead();

    // NOTE: These methods are only prototypes and program will break if used as the methods have not been declaired.
};


int main(){

    // Dot Operator Example:
    Player Sebastian;

    Sebastian.name = "Sebastian";
    Sebastian.health = 100;
    Sebastian.xp = 600;

    Sebastian.talk("Hey guys");

    // Memeber Of Pointer Operator Example:
    Player *Kinga {nullptr};

    Kinga = new Player();

    Kinga->name = "Kinga";
    Kinga->health = 100;
    Kinga->xp = 1000;

    Kinga->talk("Hi");

    delete Kinga;
    return 0;
}