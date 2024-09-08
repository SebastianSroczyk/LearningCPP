/*
    Move Constructor
    Author: Sebastian Sroczyk
    Date: 08/09/2024
*/

#include <iostream>
#include <string>
#include <vector>

/*
    To Work with move constructos we need to remind ourselves of L values and R values:
        - L values are values that can be called by name or a pointer can point to them.
        - R values are values that are assigned to L values.

        However when it comes to Move semantics R values refer to the object that is being moved.

    C++ Move Constructor and Semantics (Introduced in C++ 11):

        Sometimes when we execute code in c++ the compiler creates unnamed temporary values.

        Example:

            int total{0};
            total = 100 + 200;

            - 100 + 200 is evaluated and 300 stored in a unnamed temp value.
            - The 300 is then stored in the variable total.
            - Then the temp value is discarded.

        NOTE: The same things happens with objects.

    Useful Info:
    
        - Sometimes Copy constructors are called many times automatically due to the copy semantics of C++.
        - Copy constructors doing deep copying can have a significant preformance bottleneck.
        - C++11 introduced move semantics and the move constructor (move constructor moves an object rather than copy it)
        - Optinal but recommended when having raw pointers
        - Copy elision, C++ may optimise copying away completely (RVO - Return Value Optimisation)

    R-value Refrences:

        - Used in move semantics and perfect forwarding
        - Move semantics is all about R-values
        - Used by move constructor and move assignment opertator to efficiently move an object rather than copy it
        - R value reference operator (&&)

        Example of L-Value vs R-Value referencing:

            int x{100};
            int &l_ref = x;     // L-value refrence
            l_ref = 10;         // change x to 10

            int &&r_ref = 200;  // R-value refrence
            r_ref = 300;        // cahnge r_ref to 300 (aka change the temp value to 300)

            int &&x_ref = x;    // Compiler error

            Move Class Example:

                class Move(){
                    private:
                        int *data;                      // Raw Pointer
                    public:
                        void set_data_value(ind d){*data = d;}
                        int get_data_value(){return *data;}
                        Move(int d);                    // Constructor
                        Move (const Move &source);      // Copy - Deep Copy
                        ~Move();                        // Destructor
                };
            
        What Does Moving actually do:

            - Instead of making a deep copy of the move constructor, the move constructor "moves" the resource.
              It simply copies the the address of the resource from the source to the current object, and
              Nulls out the pointer.
            
            - Very efficient

            Synatx for a move constructor:

                Type::Type(Type &&source);

                Player::Player(Player &&source);

                Move::Move(Move &&source);

                NOTE: simular to the copy constructer but doesn't have the const qualifier and the parameter is an
                      R-value, you can tell by the double amber sign (&&)

            Move Class Example with Move Constructor:

                class Move(){
                    private:
                        int *data;                      // Raw Pointer
                    public:
                        void set_data_value(ind d){*data = d;}
                        int get_data_value(){return *data;}
                        Move(int d);                    // Constructor
                        Move(const Move &source);       // Copy - Deep Copy
                        Move(Move &&source);            // Move Constructor
                        ~Move();                        // Destructor
                };

            Move Constructer Example:

                Move(Move &&source)
                    : data{source.data}{
                        source.data = nullptr;
                }
                NOTE:: We are "Stealing" data and making the source pointer null, aka "Moving"
*/

#include "Move.h"

int main(){

    std::vector<Move> vec;

    vec.push_back(Move(10));
    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));
    vec.push_back(Move(80));

    return 0;
}