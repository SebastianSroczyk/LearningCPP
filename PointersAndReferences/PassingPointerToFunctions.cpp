/*
    Pass by refrence with pointers 
    Author: Sebastian Sroczyk
    Date: 26/07/2024
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
    To achive pass by refrence with pointers, we can use pointers and the dereference operator. In this case the parameter is a pointer and the actual parameter can be a pointer
    or an address of a variable.

        Example:

                void double_data (int *int_ptr);    // prototype

            
                void double_data (int *int_ptr){
                    *int_ptr *= 2;      // Same as *int_ptr = *int_ptr * 2;
                }

        Note: The return type is void becuase the pointer is multiplying the value at it's memeory location. (Think of it as wirelessly charging a phone.)

    This is how we would call this double_data() function:

        Example:

                int main(){

                    int value {10};
                    cout << value << endl;          // Displaying 10

                    double_data(&value);            // Passed in the address of value

                    cout << value << endl;          // 20

                    return 0;
                }
*/
void passing_pointers_one();
void double_data (int *int_ptr);    // prototype

void passing_pointers_two();
void swap(int *x, int *y);

void passing_pointers_three();
void display(const vector<string> *const v); // Adding the const makes this a lot safer as it doesn't allow use to change it in any way.
void display(const int * array , const int sentinal);

int main(){

    passing_pointers_one();
    passing_pointers_two();
    passing_pointers_three();

    return 0;
}
void passing_pointers_one(){
    int value {10};
    int *int_ptr{nullptr};

    cout << "Before Double, Value: " << value << endl;
    double_data(&value);
    cout << "After Double, Value: " << value << endl;

    cout << "-------------------------------" << endl;                      // Two different ways of doing the same thing... /\ \/
    
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    cout << endl;

}

void double_data (int *int_ptr){
    *int_ptr *= 2;      // Same as *int_ptr = *int_ptr * 2;
}

void passing_pointers_two(){

    int x{100}, y{200};

    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    swap(&x,&y);

    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    cout << endl;
}

void swap(int *x, int *y){
    
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    // OR

    /*
    
    int temp = *x;
    x* = *y;
    y* = temp;

    */
}

void passing_pointers_three(){
    
    vector<string> people {"Seba", "Arek", "Bob"};
    display(&people);

    cout << "\n---------------------------\n" << endl;
    
    int scores[] {100,23,53,23,65,-1};
    display(scores, -1);

}

void display(const vector<string> *const v){
    for (auto str: *v){
        cout << str << " ";
    }
    cout << endl;
}

void display(const int * array, const int sentinal){
    while (*array != sentinal){
        cout << *array++ << " ";
    }
    cout << endl;
}
