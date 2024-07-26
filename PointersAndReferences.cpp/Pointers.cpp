/*
    Basics of Pointers
    Author: Sebastian Sroczyk
    Date: 25/07/2024
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
    Pointer - Is a varaible whos value is an address, this address can be another variable or a function (simular to how a refence parameter is used in a function).
              however to use the data that the pointer is pointing to you must know its type.

              Inside functions pointers can be used to access data that is outside the fucntions scope. If the data is accessable there is not need for a pointer,
              we could pass by value and make a copy of the data, but that takes memory. This is why we use pointers, they are more efficient. Pointers can also be 
              used to operate on arrays very efficiently. 

              We can also manage memory dynamically during runtime on the heap or free storage. However this can only be done with pointers, as this memory doesn't
              have a varaible assigned to it.

              NOTE: Using pointers we can access specific memory addresses, which could be useful in some applications. Also Pointers is what allows polymorphism 
                    to work in OOP.
    
    Syntax for Pointers:
        
        variable_type *pointer_name

        Example:

                int *int_ptr;
                double* double_ptr;  // The asterix next to the data type also works as a pointer decleration. 
                char *char_ptr;
                string *string_ptr;
        
        Pointer varables MUST ALWAYS be initialized before use and cannot be left uninitialized. This is becuase if left uninitialized the pointer will be pointing
        to a random location, a location we may not want to mess with. We can do this the same way we initialize other variables using the list initilization syntax:

        variable_type *pointer_name {nullptr};      // nullptr - (null pointer) means we are initializing the pointer to nowhere.

        NOTE: nullptr is very different from not initilized.

    Accessing Pointer Address:

        int *p;

        cout << "Value of p is: " << p << endl;         // 0x8  -  Rubbish
        cout << "Adddress of p is: " << &p << endl;     // 0x5ffe98 - Memory Address
        cout << "Size of p is: " << sizeof(p) << endl;  // 8 - p is 8 bites of storage
        p = nullptr;        
        cout << "Value of p is: " << p << endl;         // 0 - p is zero becuase we set it to zero with nullptr

        All the pointers in the program have the same size no matter the data type.


    Storing an address in a pointer:

        Typed Pointers - A explicitly declared pointer variable pointing to a variable of a specifc type

        We store an address in a pointer by using the address operator (i.e. &), then like a normal varaible we can assign the pointer to 
        the address we want.

        Example:

            int score{10};
            double high_temp {100.7};

            int *score_ptr {nullptr};

            score_ptr = &score;     // This is okay as it is pointing to the type it was assigned to.
            score_ptr = &high_temp; // ERROR - Different data type.

    
    NOTE: Pointers can be null and can be uninitialized. Make sure pointers are initialized to nullptr if not another variable's address.


    Live code examples:
                
*/

int main(){
    
    int num{10};
    
    cout << "\nValue of num is: " << num << endl;           // 10
    cout << "Size of num is: " << sizeof(num) << endl;      // 4
    cout << "Address of num is: " << &num << endl;          // 0x5ffe9c


    int *p;
    
    cout << "\nValue of p is: " << p << endl;           // This is rubbish
    cout << "Size of p is: " << sizeof(p) << endl;      // 8
    cout << "Address of p is: " << &p << endl;          // 0x5ffe90

    p = nullptr;

    cout << "Value of p is: " << p << endl;   


    int *p1 {nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5 {nullptr};

    cout << "\nSize of p1 is: " << sizeof(p1) << endl; 
    cout << "Size of p2 is: " << sizeof(p2) << endl; 
    cout << "Size of p3 is: " << sizeof(p3) << endl; 
    cout << "Size of p4 is: " << sizeof(p4) << endl; 
    cout << "Size of p5 is: " << sizeof(p5) << endl; 

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};
    score_ptr = &score;

    cout << "\nValue of score is: " << score << endl;           // 10
    cout << "Value of score_ptr is: " << score_ptr << endl;     // 0x5ffe54   
    cout << "Address of score is: " << &score << endl;          // 0x5ffe54

    // score_ptr = &high_temp;          // Complier ERROR different data type    

    return 0;
}