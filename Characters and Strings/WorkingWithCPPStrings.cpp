/*
    Working with C++ Strings
    Author: Sebastian Sroczyk
    Date: 17/07/2024
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         // Apple
    string s6 {s1,0,3};     // App
    string s7 {10, 'X'};    // XXXXXXXXX


    cout << s0 << endl; // nothing.
    cout << s0.length() << endl; // empty string

    // Comparison

    cout << "\nComparison" << "\n ------------------------------------------------" <<endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

    // Assignment

    cout << "\nAssignment" << "\n-------------------------------------------------" << endl;

    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3 = "Seb";
    cout << "s3 is now: " << s3 << endl;

    s3[0] = 'R';
    cout << "s3 change first letter to 'R': " << s3 << endl;
    s3.at(0) = 'B';
    cout << "s3 change first letter to 'B': " << s3 << endl; 

    // Concatenation

    s3 = "Watermelon";

    cout << "\nConcatenation" << "\n-------------------------------------------------" << endl;
    
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;

    // s3 = "nice " + " cold " + s5 + " juice";     //This doesn't work as we are adding 2 c-style string literals which cannot be concatenated togther with the + operator.

    // Looping

    cout << "\nLooping" << "\n-------------------------------------------------" << endl;

    s1 = "Apple";
    for (size_t i = 0; i < s1.length(); i++){
        cout << s1.at(i);   // or s1[i]
    }
    cout << endl;

    for (char c: s1){
         cout << c;
    }
    cout << endl;
    
    // Substring

    cout << "\nSubstring" << "\n-------------------------------------------------" << endl;

    s1 = "This is a test";

    cout << s1.substr(0,4) << endl;
    cout << s1.substr(5,2) << endl;
    cout << s1.substr(10,4) << endl;

    // Erase

    cout << "\nErase" << "\n-------------------------------------------------" << endl;

    s1 = "This is a test";

    s1.erase(0,5);
    cout << s1 << endl;

    // Getline

    cout << "\nGetline" << "\n-------------------------------------------------" << endl;

    string full_Name{};

    cout << "Enter your full name: ";
    getline(cin, full_Name);

    cout << "Your full name is: " << full_Name << endl;

    
    // Find

    cout << "\nFind" << "\n-------------------------------------------------" << endl;

    s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the word to find:";
    cin >> word;

    size_t position = s1.find(word);
    if (position != string::npos){
        cout << "Found " << word << " at position: " << position << endl;
    }
    else{
        cout << "Sorry " << word << " not found." << endl;
    }
}