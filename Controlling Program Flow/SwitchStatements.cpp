/*
    simple switch statements
    Author: Sebastian Sroczyk
    Date: 07/07/2024
*/
#include <iostream>

/*
    Fall-through: When a switch statement doesn't include a break the code keeps executing each case until it hits a break.
    Example:

    switch(selection){
        case '1': cout << "1 selected";

        case '2': cout << "2 selected";

        case '3': cout << "3 selected";

        case '4': cout << "4 selected";
        break;

        default: cout << "None selected."
    } 

    This switch would display "1 selected", "2 selected" and "3 selected", when the user inputs 1. This is beacause there
    are no breaks stopping the code from checking the next case.

    Fall-through can be used but must be well documented in code and outside. When maintanace is done other programmer understand the fall-through was intended.

    Best practice: use break statements and handle the default case.
*/

using namespace std;

/*
    Asks the user what grade they expecct on an exam and 
    tell them what they need to score to get it.  
*/

int main(){

    char letter_Grade;
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_Grade;

    switch(letter_Grade){

        case 'A':
        case 'a':{
            cout << "You need to score 90 or more." << endl;
            break;
        }
        case 'B':
        case 'b':{
            cout << "You need to score between 70 and 90." << endl;
            break;
        }
        case 'C':
        case 'c':{
            cout << "You need to score between 50 and 70." << endl;
            break;
        }
        case 'D':
        case 'd':{
            cout << "You need to score between 30 and 50." << endl;
            break;
        }
        case 'F':
        case 'f':{
            cout << "You need to score less than 30" << endl;
            break;
        }
        default:{
            cout << "This is not a vaild letter grade." << endl;
        }
    }
    return 0;
}