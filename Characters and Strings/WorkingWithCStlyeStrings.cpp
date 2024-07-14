/*
    Character Functions
    Author: Sebastian Sroczyk
    Date: 13/07/2024
*/

#include <iostream>
#include<cstring>
#include<cctype> // character-based Functions

/*
    size_t - A unsigned integer that is based on your system. ( This value will always work no matter the system specs)

*/
using namespace std;

int main(){

    char first_Name[20] {};
    char last_Name[20] {};
    char full_Name[50] {};
    char temp[50] {};

    /*
    cout << "Enter your first name: ";
    cin >> first_Name;

    cout << "Enter your last name: ";
    cin >> last_Name;

    cout << "Hello " << first_Name << ", your name has " << strlen(first_Name) << " characters"; //strlen(): Returns size_t. 
    cout << " and your last name: " << last_Name << " has " << strlen(last_Name) << " characters.";

    strcpy(full_Name, first_Name); // Copying first_Name into full_Name
    strcat(full_Name, " "); // concatinating a space to the full_Name
    strcat(full_Name, last_Name); // concatinating last_Name to full_Name

    cout << "\nYour full name is: " << full_Name << endl;

    cout << "------------------------" << endl;
    */

    cout << "Enter your different full name: ";

    char diff_Full_Name[50]{};

    cin.getline(diff_Full_Name, 50); // Stops either when the user presses "Enter" or when the users hits the character limit. In this case it is: 50

    cout << "Your different full name is: " << diff_Full_Name << endl;

    cout << "-------------------------" << endl;

    strcpy(temp, diff_Full_Name);

    if (strcmp(temp, diff_Full_Name) == 0){     // strcmp - (string compare) returns 0 or 1 depending if strings are the same
        cout << temp << " and " << diff_Full_Name << " are the same." << endl;;
    }else{
        cout << temp << " and " << diff_Full_Name << " are different." << endl;;
    }
    cout << "--------------------------" << endl;
    
    // Converting Temp to all caps

    for(size_t i{}; i < strlen(diff_Full_Name); ++i){
        if(isalpha(diff_Full_Name[i])){  // isalpha - Checks if something is a character.
            diff_Full_Name[i] = toupper(diff_Full_Name[i]);  // toupper - changes characters to uppercase.
        }
    }

    cout << "Your different full name is(capitalized): " << diff_Full_Name << endl;

    if (strcmp(temp, diff_Full_Name) == 0){     // strcmp - (string compare) returns 0 or 1 depending if strings are the same
        cout << temp << " and " << diff_Full_Name << " are the same." << endl;;
    }else{
        cout << temp << " and " << diff_Full_Name << " are different." << endl;;
    }
    cout << "--------------------------" << endl;

    /*
        strcmp returns negative 0 or positive number depending on which string is larger.
    */
    cout << "Results of Comparison: " << temp << " and " << diff_Full_Name << " = " << strcmp(diff_Full_Name, temp) << endl;
    cout << "Results of Comparison: " << diff_Full_Name << " and " << temp << " = " << strcmp(temp, diff_Full_Name) << endl;




    



    return 0;
}
