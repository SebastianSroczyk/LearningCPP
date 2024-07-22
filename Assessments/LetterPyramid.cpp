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

    /*
    std::string letters{};

    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            std::cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            std::cout << letters.at(j);
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            std::cout << letters.at(k);
        }

        std::cout << std::endl; // Don't forget the end line
        ++position;
    }
    */
    return 0;
}

    

    

    


  
