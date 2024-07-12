/*
    While loops
    Author: Sebastian Sroczyk
    Date: 12/07/2024
*/

#include <iostream>

/*

    Do While Loop: A Post-test loop that tests an expression after executing the looped statement.
    Note: If the test fails the loop will not be executed again.

*/

using namespace std;

int main(){

    char selection{};
    bool selected {false};
    do{
        cout << "\n----------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. To quit" << endl;
        cout << "----------------------" << endl;
        cout << "Enter Selection: ";
        cin >> selection;

        switch(selection){

            case '1':{
                cout << "\nYou selected option 1..." << endl;
                selected = true;
                break;
            }
            case '2':{
                cout << "\nYou selected option 2..." << endl;
                selected = true;
                break;
            }
            case '3':{
                cout << "\nYou selected option 3..." << endl;
                selected = true;
                break;
            }
            case 'q':
            case 'Q':{
                cout << "\nGoodBye" << endl;
                selected = true;
                break;
            }
            default:{
                cout << "\nThat input is not correct please try again." << endl;
                break;
            }
        }

    }while(selection != 'q' && selection != 'Q' && !selected);


    return 0;
}