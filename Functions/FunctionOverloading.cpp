/*
    Overloading Functions
    Author: Sebastian Sroczyk
    Date: 23/07/2024
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
        Overloading Functions - These are functions with different parameter lists and the same name. (i.e. this_function(int num , string word) and this_function(bool answer, int num)),
                                This is a type of polymorphism. The functions must be different in the parameter lists, as the return type is not considered. (i.e. having 
                                int get_value() and double get_value() will end up with an error. As the complier won't know which one to use)


                                Example:

                                        int add_numbers(int a, int b);
                                        double add_numbers(double a, double b);

                                        int main(){

                                            cout << add_numbers(10,50) << endl;             // When we pass in integers into the function, 
                                                                                            // the int varient of the add_numbers function
                                                                                            // is used.
                                            
                                            
                                            cout << add_numbers(5.50, 7.54) << endl;        // When we pass in doubles into the function, 
                                                                                            // the double varient of the add_numbers function
                                                                                            // is used.

                                            return 0;
                                        }

                                NOTE: Function templates can be used to do the same thing, however they are more advanced and I will look into them later.

*/

void print(int a);
void print(double a);
void print(string a);
void print(string a,string b);
void print(vector<string> a);


int main() {

    print(100);
    print('A'); // Characters are always promoted to a int, should print 65 ASCII ('A')

    print(64.36);

    print("This is a string"); // C-style string is converted to a c++ string 

    string a_string {"this one."};
    print("This string and ", a_string);

    vector<string> string_Vector {"This is something."};
    print(string_Vector);

    return 0;
}

void print (int a){
    cout << "Printing int: " << a << endl;
}

void print (double a){
    cout << "Printing double: " << a << endl;
}

void print (string a){
    cout << "Printing string: " + a << endl;
}

void print (string a, string b){
    cout << "Printing two strings: " + a + b << endl;
}

void print (vector<string> a){
    for(auto b: a){
        cout << "Printing vector<sting> element: " + b << endl;
    }
}