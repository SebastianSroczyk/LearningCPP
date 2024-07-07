/*
    simple switch statements with enums
    Author: Sebastian Sroczyk
    Date: 07/07/2024
*/
#include <iostream>

/*
    Enum: Related constants. We can easily add and take away these constants. 
          It is a special class that represents constants.

    NOTE: All enum values must be declared in cases otherwise an error will appear. OR we can use a default to catch the remaining values.
*/

using namespace std;

int main(){

    enum Direction{
        left,right,up,down
    };

    Direction heading {left};

    switch(heading){

        case left:{
            cout << "Going left" << endl;
            break;
        }
        case right:{
            cout << "Going right" << endl;
            break;
        }
        default:{
            cout << "Okay" << endl;
            break;
        }
    }
    return 0;
}