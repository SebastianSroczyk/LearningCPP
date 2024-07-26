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
    Dereferencing a pointer - Accessing the data we're the pointer is pointing to.

    To Dereference a pointer we can use the dereferencing operator/indirection operator (i.e. *), this is the same operator that was used
    to declare a pointer. (yes it's confusing and the community doesn't like it but it is what it is) When a pointer is dereference a pointer,
    it results in the L-Value (The address the pointer is pointing to)

        Example:

                int score{100};
                int *score_ptr{&score};

                cout << *score_ptr << endl;     // 100

                *score_ptr = 200;   // We are changing the value of the variable the pointer is pointing to at the current address

                cout << *score_ptr << endl;     // 200
                cout << score << endl;           // 200

        Example2:

                double high_temp {34.6};
                double low_temp {5.5};
                double *temp_ptr {&high_temp};

                cout << *temp_ptr << endl;      // 34.6

                temp_ptr = &low_temp;   // We are setting the address of the pointer to a new address

                cout << *temp_ptr << endl;      // 5.5
*/

int main(){

    int score{100};
    int *score_ptr{&score};

    cout << "Score: " <<score << endl;  
    cout << "Before score_ptr change: " << *score_ptr << endl;
     

    *score_ptr = 200;               // We are changing the value of the variable the pointer is pointing to at the current address

    cout << "After score_ptr change: " << *score_ptr << endl;     
    cout << "Score: " <<score << endl;           

    cout << "\n--------------------------------------" << endl;
    double high_temp {34.6};
    double low_temp {5.5};
    double *temp_ptr {&high_temp};

    cout << *temp_ptr << endl;      

    temp_ptr = &low_temp;           // We are setting the address of the pointer to a new address

    cout << *temp_ptr << endl;

    cout << "\n--------------------------------------" << endl;
    string name {"Sebastian"};
    string *string_ptr{&name};

    cout << *string_ptr << endl;

    name = "John";                  // We are changing the name variable, the pointer will continue to point in the same place so if the value
                                    // changes it will show the new value at the location.

    cout << *string_ptr << endl;

    cout << "\n--------------------------------------" << endl;
    vector<string> people{"Connor", "Mary", "Joe"};
    vector<string> *people_ptr{nullptr};

    people_ptr = &people;

    cout << "First Person: " << (*people_ptr).at(0) << endl;    // Make sure when dereferencing a pointer; that is a vector, the pointer is put in brackets () as the dot operator (.) has
                                                                // higher precedence than the dereference operator (*).
    cout << "Second Person: " << (*people_ptr).at(1) << endl;
    cout << "Third Person: " << (*people_ptr).at(2) << endl;


    cout << "\nPeople in a range-based for loop: ";
    for (auto humans: *people_ptr){
        cout << humans << " ";
    }
    cout << endl;
    

    return 0;
}
