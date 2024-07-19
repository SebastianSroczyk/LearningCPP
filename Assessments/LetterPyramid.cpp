/*
    Letter Pyramid Assessment
    Author: Sebastian Sroczyk
    Date: 19/07/2024
*/

#include <iostream>
#include <string>

using namespace std;

int main(){


    // Not working properly

    string input {};
    cout << "Enter the characters you would like to see in your pyramid: ";
    cin >> input;

    string space (input.length() - 1, ' ');
    string output{};
    for( char c: input){

    }
    for (size_t i {0}; i < input.length(); ++i){   // i: 0,1,2 

        if (i == 0){
            output = space + input.at(i);
            cout << output;
        }
        else{
            
            output = space.erase(0,1) + input.substr(0,i+1);
            cout << output; 
        }
        
        cout << endl;
    }
    return 0;
}

    

    

    


  
