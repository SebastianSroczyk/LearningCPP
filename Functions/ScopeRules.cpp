/*
    Scope Rules in C++
    Author: Sebastian Sroczyk
    Date: 24/07/2024
*/

#include <iostream>
#include <string>


using namespace std;

/*
    Score Rules:  
    
                -   C++ uses scope rules to determine where an identifier can be used, it uses static/lexical scoping (i.e. it determines the scope the same way the program is written),
                    the TWo main scopes are: Local/block and Global.This is the same as local and global variables. 
                  
                -   Local scope refers to identifiers that are delared in a block {}.
                    
                -   Local scope identifiers are only visable within the block they where declared in. This means Function local variables are only active while the function is executing. 
                
                -   Local variables are NOT preserverd between function calls (i.e. when a function finishes executing, anything inside that block that has been declared will reset).


    Static local Variables:  

                -   Declared with a static qualifer (i.e. static): 

                                static int value{10};

                -   The static qualifier preserves the value of a varaible between function calls

                -   The static local variable is onlt initilized the first time the function is called.


    Global Scope:   

                -   Identifiers declared outside any function or class, these identifiers are visable in all parts of the program.

                -   Best practice: Use only for Global Constants.

*/

int num{300};       // global Variable - Declared outside of any class or funciton

void local_example(int x);
void global_example();
void static_local_example();


int main(){

    int num {100};  // local to main
    int num1 {500}; // local to main

    cout << "Local Num is: " << num << " in main." << endl;

    {   // Creates a new level of scope
        int num {200}; // local to this inner block
        cout << "Local Num is: " << num << " in inner block in main." << endl; // The local num has priority in being assigned compared to the num in main. 
                                                                               // Therefore num 200 will display.
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }

    cout << "Local Num is: " << num << " in main." << endl; // This num looks inside its own scope which in this case is main. 
                                                            // It CANNOT look into another scope, so num 100; is displayed.

    local_example(10);
    local_example(20);

    global_example();
    global_example();   // Becuase this uses a global variable, the number is kept from the last time is was access, so we get a different number every time.

    static_local_example();
    static_local_example();
    static_local_example();

    return 0;
}

void local_example(int x){
    int num {1000}; // local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    num = x; // local num in local_example is set to x
    cout << "\nLocal num is: " << num << " in local_example - end" << endl;
    // num1 in main is not within scope - so it can't be used here.
}
void global_example(){

    cout << "\nGlobal num is: " << num << " in global_example - start" << endl; // Becuase num is not declared inside this function, the complier looks outside of this and finds
                                                                                // the global variable num 300.
    num *= 2;
    cout << "\nGlobal num is: " << num << " in global_example - end" << endl;   
}
void static_local_example(){
    static int num {5000}; // This value is initilized once and then retains the value it is assigned to. On application launch it is 5000, then next time the function is called
                           // it could be anything.
    
    cout << "\nLocal Static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "\nLocal Static num is: " << num << " in static_local_example - start" << endl;

}