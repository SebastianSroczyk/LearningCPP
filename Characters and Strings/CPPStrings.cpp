/*
    C++ Strings
    Author: Sebastian Sroczyk
    Date: 15/07/2024
*/

#include <iostream>


/*
    <string> - Is a library containing String functions used in C++

                Unlike C-style strings, C++ strings are dynamic and can shrink and grow at run time. They also are stored contiguesly in memory.
                C++ strings work well with commonly used operators unlike c-style strings which have a hard time with them. C++ string are also
                a lot safer than C-style strings. This is due to a lot of different functions that allow for checks to be done on the strings.


                Example of some initilizations of C++ strings and outputs:

                    String Initilization  |  Output
                    ------------------------------------------
                    string s1;            |   
                    string s2 {"Seba"};   |     Seb
                    string s3 {s2};       |     Seb
                    string s4 {"Seba", 3};|     Seb
                    string s5 {s3, 0, 2}; |     Se   // The 0 is the starting index and the 2 is the length. So index 2 length 2 would be: ba
                    string s6 (3, 'X');   |     XXX  // NOTE: Using contstructor syntax () not list syntax {}


                Assignment of string is very simple:

                    string s1;
                    s1 = "Hello";

                    string s2;
                    s2 = s1;  // s2 holds "Hello" now.

                Simple Concatenation of strings:

                    string part1 {"This is"};
                    string part2 {"Simple concatenation"};

                    string sentence;

                    sentance = part1 + " " + part2; // when displayed: "This is Simple concatenation" 

                    NOTE: This style of concatenating only works with c++ strings and c-style strings. NOT with string literals (i.e. "this" + "this"  will not work.) 

                We can display C++ strings individually using a range-based for loop like before.

                    string s1 {"Sebastian"};

                    for (char c: s1){
                        cout << c << endl; 
                    }

                    This will display:

                        S
                        e
                        b
                        a
                        s
                        t
                        i
                        a
                        n
                    Like expected, However we can change the char datatype in the loop for an int to get the ASCII values of those characters like this:

                    string s1 {"Sebastian"};

                    for (int c: s1){
                        cout << c << endl; 
                    }

                    This will display:

                        83
                        101
                        98
                        97
                        115
                        116
                        108
                        97
                        110
                    
                Comparing C++ strings is very simple and uses the same comparison operators we used before in the "Controling Program Flow" Section.

                    Comparison Operators ( i.e. == , >= , < , etc.) can be used to compare strings letter by letter lexically. This means a is less than z,
                    f is more than d etc. However Capital letter are less than the lowercase letters due to them coming before the lowercase letters in the
                    ASCII table.

                    We CANNOT use this style of comparrison on 2 c-stlye string literals, but we can on:

                        - two string objects
                        - one string object and a c-style string literal
                        - one string object and a c-style string variable

                The <string> library has a lot of different functions we can use. Here are a few more common string functions:   NOTE: There is a lot more to learn here.

                    object.substr(start_index, length) - This function extracts a substring from a string, this is doen by declaring a starting point and how many characters to go forwards.
                    
                        Example:    
                                    string  s1 {"This is a test"};

                                    cout << s1.substr(0,4);   // Will display: "This"
                                    cout << s1.substr(5,2);   // Will display: "is"
                                    cout << s1.substr(10,4);  // Will display: "test"

                    object.find(search_string) - This function returns the index of a substring in a std::string

                        Example:    
                                    string  s1 {"This is a test"};

                                    cout << s1.find("This");   // 0
                                    cout << s1.find("is");     // 2
                                    cout << s1.find("test");   // 10
                                    cout << s1.find('e');      // 11
                                    cout << s1.find("is", 4);  // 5  - This ia a varient of find which lets you search from a centrain index forwards. 
                                                                       object.find(search_string, starting_index);
                                    cout << s1.find("XX");     // string::npos - No position information available

                    
                    object.rfind(search_string) - Another function that can be used to search, but this searches from the end of the string to the beginning.
                                                  Works just like the .find() function.

                    object.erase(start_index, length) - This removes a substring of characters from a std::string

                        Example:
                                    string s1 "This is a test";

                                    cout << s1.erase(0,5); // Will display: is a test
                                    cout << s1.erase(5,4); // Will dispaly: is a
                                    
                                    s1.clear(); // Empties string s1  

                    object.length() - This displats the length of a std::string

                        Example:
                                    string s1 {"Sebastian"};

                                    cout << s1.length() << endl;  // Will display: 9

                                    s1 += " Bob";

                                    cout << s1 << endl;   // Will dispaly: "Sebastian  Bob"

                As previous said there are way more functions that can be used but these are the most common. 

                
                Input with c++ strings works very well. However the same issue c-style strings have C++ strings also have, getting a whole line as a single input.
                Just like before we get this by using the getline(input_location, string_object) function. Here is an example of .getline() being used:

                    Example:    
                                string s1;
                                cin >> s1;          // If input is: Hello there
                                                    // Only accepts up to the first space

                                cout << s1 << endl;  // Will display: "Hello"

                                getline(cin, s1);   // Reads entire line until \n (i.e. new line)
                                cout << s1 << endl; // Will display: "Hello there"

                There is another version of getline() and that is:

                    getline(input_location, string_object, delimiter) - The delimiter is a character that once getline hits it will stop reading further.

                    Example: 

                                string s1;
                                cin >> s1;          // If input is: Hello there x what a day

                                getline(cin, s1, 'x')
                                cout << s1 << endl; // will only display: "Hello there "

*/
#include <string>

using namespace std;

int main(){

    string string_Name {"Sebastian"};

    for (char c: string_Name){
        cout << c << endl; 
    }

    cout << "Now ASCII: " << endl;

    for (int c: string_Name){
        cout << c << endl; 
    }

    cout << "=======================" << endl;

    string  s1 {"This is a test"};

    cout << s1.substr(0,4) << endl;   // Will display: "This"
    cout << s1.substr(5,2) << endl;   // Will display: "is"
    cout << s1.substr(10,4) << endl;  // Will display: "test"

    cout << "=======================" << endl;

    string weird_String{"What ( a % weird * string!"};

    cout << "Substring start of weird at index: " <<  weird_String.find("weird") << endl;

    cout << "Length of string: " << weird_String.length() << endl;

    return 0;
}