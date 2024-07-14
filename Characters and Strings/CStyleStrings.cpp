/*
    C-Style Strings
    Author: Sebastian Sroczyk
    Date: 13/07/2024
*/

#include <iostream>
#include <vector>

/*
   C-Style Strings: Use sentinal value that marks the end of the string. Which is equivalent to 0.
                    C-Style Strings are often refered to as zero or null terminated strings.

                    String Literals are a type of C-style string. Even though we don't declaire the
                    end of the string. That is becuase C++ inserts the sentinal values for us.

                    This is an example of how a string literal is stored in memory:

                        "C++ is fun"  is stored like this:  |C|+|+| |i|s| |f|u|n|\0|
                                                                                  ^
                                                                                  |
                                                                                null character(sentinal value)

                        This string is stored in a contiguous block of memeory that
                        can be accessed as an array. The string is 10 characters long
                        but the complier allocated 11 characters because of the null 
                        character to end the string. 


    Here are some C-style string variables and the issues we could encounter:

    ==============================================================================================================================================
    Example 1:

    char my_Name[] {"Sebastian"};

    Which is stored like this:  |S|e|b|a|s|t|i|a|n|\0|

    if we try to change the array at it's 9th index to spell "Sebastians" we will encounter an problem.

    my_Name[9] = "s";       The program will allow this but it will cause some unforseen errors in memory.
                            As we just replaced the null character ending the string.

    
    ==============================================================================================================================================
    Example 2:

    The way we can get around the previous problem is by declairing the character array to be larger then the string we want to store:

    char my_Name[12] {"Sebastian"};

    Which is stored like this: |S|e|b|a|s|t|i|a|n|\0|\0|\0|

    Becuase this has 3 null character we can edit the 2 before the end without any issues.

    my_Name[9] = "s"; |S|e|b|a|s|t|i|a|n|s|\0|\0|

    ==============================================================================================================================================
    Example 3:

    If we allocate a c-style string array like previous without declairing it we will encounter an issue, when trying to assign a value to my_Name.

    char my_Name[12]; 

    my_Name = "Sebastian";          We get an error as C-style strings are not complied this way. They work like a range-based for-loop going through an array.

    To get around this we used strcpy(array, string) function which copied the string literal to a c-style string like this:

    strcpy(my_Name, "Sebastian");  

    ==============================================================================================================================================

    cstring Library - contains many functions that work with c-style strings. Here are some of the things the library is capable of:

            - Copying
            - Concatenation
            - Comparison
            - Searching
            - and others

        All of these rely that the sequence of characters is terminated by a null character.

        Here are a few examples of those C-style string functions:

        char str[80];

        strcpy(str, "Hello "); // Copy

        strcat(str, "there!"); // Concatenation

        cout << strlen(str); // length check

        strcmp (str, " Another"); // Comparison
    
    cstdlib - Contains functions that convert strings to other types.

    Example:    "12" can be converted to 12
*/

#include <cstring>

using namespace std;

int main(){

    char str[80];

    strcpy(str, "Hello "); // Copy

    strcat(str, "there!"); // Concatenation

    cout << strlen(str); // length check

    strcmp(str, " Another"); // Comparison

    cout << "\n" <<str << endl;

    return 0;
}
