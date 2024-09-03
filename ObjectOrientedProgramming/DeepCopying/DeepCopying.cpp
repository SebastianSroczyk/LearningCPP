/*
    Deep Copying w/ copy constructors
    Author: Sebastian Sroczyk
    Date: 03/09/2024
*/

#include <iostream>
#include <string>

/*
    User-Provided copy constructor

        - Create a copy of the pointed to data
        - Eahc copy will have a pointer to unique storage in the heap
        - Deep copy when you have a raw pointer as a class data member

        Deep class example:

            class Deep {
                private:
                    int *data;                      // POINTER

                public:
                    Deep(int d);                    // Constructor
                    Deep(const Deep &source);       // Copy Constructor
                    ~Deep();                        // Destructor
            };

        Deep Constructor Example:

            Deep::Deep(int d){
                data = new int;                     // Allocate Storage
                *data = d;
            }

        Deep Destructor Example:

            Deep::~Deep(){
                delete data;                        // Free storage
                std::cout << "Destructor freeing data" << endl;
            }
        
        NOTE: All of these are the same as the Shallow copy varients. The difference comes in the Copy Constructor

        Deep Copy Constructor Example:

            Deep::Deep(const Deep &source){
                data = new int;                     // Allocate storage
                *data = *source.data;
                std::cout << "Copy Constructor - Deep" std::endl;
            }

            NOTE: A deep copy, allocates storage space first, then copies over the data.

        More Efficient Deep Copy Constructor Example:

            Deep::Deep(const Deep &source)
                : Data{*source.data}{
                std::cout << "Copy Constructor - Deep" std::endl;
            }


*/

#include "Deep.h"

void display_deep(Deep d){
    std::cout << d.get_data_value() << std::endl;
}

int main(){

    Deep obj1 {100};
    display_deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    display_deep(obj2);


    return 0;
}