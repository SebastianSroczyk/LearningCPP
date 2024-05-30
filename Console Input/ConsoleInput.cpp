// # - preprocessor directives: can be used to make specifc code to run on specific machines
// #include - includes files and any libraries you need to run the source code
#include <iostream>


int main(){
    
    int iFavoriteNumber;

    // << - insertion operator
    // cout - console output
    std::cout << "Enter your favorite number between 1-100: ";

    // >> - extraction operator
    // cin - console input
    std::cin >> iFavoriteNumber;

    // endl - End Line: Flushes the output buffer which makes sure there is nothing 
    // else to process before sending the data over to the complier for that
    // line of code. Also changes Lines in console.
    std::cout << "Wow that's my favorite number too!" << std::endl;

    // << - works similar to + in C#
    std::cout << "No really! " << iFavoriteNumber << " is my favroite number!" << std::endl;

    // Pauses the console so the program doesn't close automaticly after sucessful completion
    system("pause");

    // main returns 0 if everything is okay in the function
    return 0;

    
}