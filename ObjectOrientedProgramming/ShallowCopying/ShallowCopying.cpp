/*
    Shallow copying w/ copy constructors
    Author: Sebastian Sroczyk
    Date: 03/09/2024
*/

#include <iostream>
#include <string>

/*
    Shallow vs. Deep Copying

        Consider a class that contians a pointer as a data member. A constructor allocates storgage dynamically and initializes the pointer.
        A Destructor releases the memory allocated by the constructor.

        What happens in the defualt copy constructor?

            A shallow Copy is the default behaviour provided by the compiler generated copy constructor. It Basically does member-wise copying
            of all object attributes. So you end up with the object and the copied object both pointing to the same area of storage in the heap.

            - Member-wise copy
            - Each data memeber is copied from the source
            - The pointer is copied NOT what it points to

            PROBLEM: When we release the storage in the destructor, the other object still refers to hte released storage!
        
        Shallow Copy Example:

            class Shallow{
                private:
                    int *data;                              // Pointer
                public:
                    Shallow(int d);                         // Constructor
                    Shallow(const Shallow &source);         // Copy Constructor
                    ~Shallow();                             // Destructor
            };

            Shallow::Shallow(int d){
                data = new int;                             // Allocate Storage
                *data = d;
            }

            Shallow::~Shallow(){
                delete data;                                // Freeing Storage
                std::cout << "Destructor freeing data" << std::endl;
            }

            // This User defined copy constructor works on the same semantics as the default copy constructor provided by the compiler.
            Shallow::Shallow(const Shallow &source)
                : data(source.data){
                    std::cout << "Copy Constructor - Shallow" << endl; 
            }

            NOTE: Shallow Copy - Only the pointer is copied - not what it is pointing to!
            Problem: Source and the newly created object BOTH point to the SAME data area!

            int main(){
                Shallow obj1{100};
                display_shallow(obj1);
                // obj1's data has been released!

                obj1.set_data_value(1000);
                Shallow obj2 {obj1};
                cout << "Hello World" << endl;
                return 0;
            }


*/

#include "Shallow.h"

void display_shallow(Shallow s){
    std::cout << s.get_data_value() << std::endl;
}

int main(){

    Shallow obj1 {100};         // Object is created and declared
    display_shallow(obj1);      // Object copy is made, and it's data is displayed, then obj1 - copy is destroyed as it goes out of scope.  
                                // (This also displays obj1 data as the obejct has a raw pointer pointing to the same direction
                                //  as obj1 and destorys the data of  obj1, this is an issue)

    Shallow obj2 {obj1};        // Copy of obj1 is created (pointing to the same memory location as obj1, this is an issue)
    obj2.set_data_value(1000);  // Value of obj2 is set to 1000 (This also sets the value of obj2 to 1000 as they both point to the same memeory location)

    // THIS CODE CRASHES ON PURPOSE

    return 0;
}