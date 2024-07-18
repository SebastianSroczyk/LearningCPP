/*
    Substitution Cipher using ASCII
    Author: Sebastian Sroczyk
    Date: 17/07/2024


    A simple and very old method of sending secret messages is the substitution cipher.
    You might have used this cipher with your friends when you were a kid.
    Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
    For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

    Write a program that asks a user to enter a secret message.

    Encrypt this message using the substitution cipher and display the encrypted message.
    Then decrypted the encrypted message back to the original message.

    You may use the 2 strings below for your subsitition.
    For example, to encrypt you can replace the character at position n in alphabet 
    with the character at position n in key.

    To decrypt you can replace the character at position n in key
    with the character at position n in alphabet.

    Have fun! And make the cipher stronger if you wish!
    Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
    forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
    This could also be improved.

    Remember, the less code you write the less code you have to test!
    Reuse existing functionality in libraries and in the std::string class!
*/
#include <iostream>
#include<string>


using namespace std;



int main(){

    
    const int max_ASCII_Value {126};
    const int min_ASCII_Value {32};
    const size_t encryption_Clamp_Value{max_ASCII_Value - min_ASCII_Value}; // 94

    string unencrypted_Message{};
    cout << "Enter the message you would like to encrypt: ";
    getline(cin, unencrypted_Message);

    size_t key {0}; // This can be changed to what ever value you would like between 0-94
    cout << "Please enter the encryption Key (0-90): ";
    cin >> key;

    cout << "\nEncrypting Message..." << endl;
    string encrypted_Message{};
    for(int ASCII_Value: unencrypted_Message){
        int tempValue = ASCII_Value + key;

        if(tempValue > max_ASCII_Value){
            tempValue -= encryption_Clamp_Value;
        }
        encrypted_Message += static_cast<char>(tempValue);
    }
    
    cout << "\nHere is your encrypted message: " << encrypted_Message << endl;

    cout << "\nDecrypting Message..." << endl;

    string decrypted_Message{};

    for(int ASCII_Value: encrypted_Message){
        int tempValue = (ASCII_Value - key);
        if(tempValue < min_ASCII_Value){
            tempValue += encryption_Clamp_Value;          
        }
        decrypted_Message += static_cast<char>(tempValue);
    }

    cout << "\nHere is your decrypted message: " << decrypted_Message << endl;

    return 0;
}
