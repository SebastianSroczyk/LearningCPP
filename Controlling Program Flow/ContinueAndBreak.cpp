/*
    continue and break in loops
    Author: Sebastian Sroczyk
    Date: 12/07/2024
*/

#include <iostream>

/*
    continue: No further statements in the body of the loop are executed,
              and control immediately goes directly to the beginning of 
              the loop for the next iteration. (I.e. Skip iteration start loop again)

    break: no further statements in the body of the loop are executed,
           loop is imediately TERMINATED, and control immediately goes
           to the statement following the loop construct. (I.e Skip iteration and terminate loop)
*/

using namespace std;

int main(){
    // Infinate If loop with a continue and break;
    
    for (;;){
        int choice{};
        cout << "Pick a number from 1-10: ";
        cin >> choice;

        if (choice == 3){
            break;
        }
        else if (choice == 7)
        {
            cout << "BOOOOOO" << endl;
        }
        else{
            cout << "Choose again" << endl;
            continue;
        }
        cout << "This is my life..." << endl;
    }

    // Infinate while Loop with a strategic break.

    while (true){
        char again{};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> again;
        
        if(again == 'n' || again == 'N'){
            break;
        }
    }

    return 0;
}