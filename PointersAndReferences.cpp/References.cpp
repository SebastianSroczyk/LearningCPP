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
    Referance - A alias for a variable, this alias must be initialized to a variable when declared and cannot be null. Once initialized this reference cannot be made to 
                refer to a different variable, they are very useful as function parameters. (They act simular to a constant pointer that is automatically dereferenced).

        Example:

                vector<string> people {"Larry", "Moe", "Curly"};

                for (auto &str: people){
                    str = "Funny";
                }
                for (auto const &str: people){
                    cout << str << endl;            // Displays: Funny Funny Funny
                }

*/

int main(){

    int num {100};
    int &ref {num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;

    cout << num << endl;
    cout << ref << endl;

    ref = 300;

    cout << num << endl;
    cout << ref << endl; 

    vector<string> people {"Larry", "Moe", "Curly"};

    for (auto &str: people){        // &str links back to the list and changes the list and doesn't make a copy of the list.
        str = "Funny";
    }
    for (auto const &str: people){
        cout << str << endl;            // Displays: Funny Funny Funny
    }

    return 0;
}