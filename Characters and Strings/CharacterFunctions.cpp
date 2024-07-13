/*
    Character Functions
    Author: Sebastian Sroczyk
    Date: 13/07/2024
*/

#include <iostream>
#include <vector>

/*
    <cctype> - A library that contains a lot of functions which help with things like:
                    -- Testing characters
                    -- converting character case


            Here are a few functions that are used in character testing:

                FUNCTION     |         Output
            _________________|_____________________________
                isalpha(c)   |    True if c is a letter
                isalnum(c)   |    True if c is a letter or digit
                isdigit(c)   |    True if c is a digit
                islower(c)   |    True if c is a lowercase letter
                isprint(c)   |    True if c is a printable character
                ispunct(c)   |    True if c is a punctuation character
                isupper(c)   |    True if c is an uppercase letter
                isspace(c)   |    True if c is a whitespace

            Here are the two character conversion functions:

                FUNCTION     |         Output
            _________________|_____________________________
                tolower(c)   |      returns lowercase of c
                toupper(c)   |      returns uppercase of c

*/          
#include <cctype>

using namespace std;

int main(){

    vector<char> list_Of_Letters{'h','e','L','l','O','W','o','R','L','D'};
    char temp_Letter{};
    for(auto val: list_Of_Letters){
        
        temp_Letter = toupper(val);
        cout << temp_Letter;
    }
    cout << endl;

    for(auto val: list_Of_Letters){

        temp_Letter = tolower(val);
        cout << temp_Letter;
    }
    cout << endl;

    for(auto val: list_Of_Letters){
        if (islower(val)){
            temp_Letter = toupper(val);
        }
        else{
            temp_Letter = val;
        }
        cout << temp_Letter;
    }
    cout << endl;
    
    return 0;
}