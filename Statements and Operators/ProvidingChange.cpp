/*
    Providing Change from a number of pence
    Author: Sebastian Sroczyk
    Date: 05/07/2024
*/
#include <iostream>

using namespace std;

/*=============================================

    1 pound is 100 pence
    50 pence coin is 50 pence
    20 pence coin is 20 pence
    10 pence coin is 10 pence
    5 pence coin is 5 pence
    2 pence coin is 2 pence
    1 pence coin is 1 pence 
===============================================*/

int main(){

    // constants
    const int pound{100};
    const int fifty_Pence{50};
    const int twenty_Pence{20};
    const int ten_Pence{10};
    const int five_Pence{5};
    const int two_Pence{2};
    const int one_Pence{1}; 

    int change_Value{0};
    int balance{}, pounds{}, fifty{}, twenty{},ten{},five{},two{},one{};

    cout << "Enter the ammount in pence: ";
    cin >> change_Value;


    pounds = change_Value / pound;
    balance = change_Value % pound;

    fifty = balance / fifty_Pence;
    balance %= fifty_Pence;

    twenty = balance / twenty_Pence;
    balance %= twenty_Pence;

    ten = balance / ten_Pence;
    balance %= ten_Pence;

    five = balance / five_Pence;
    balance %= five_Pence;

    two = balance / two_Pence;
    balance %= two_Pence;

    one = balance;

    cout << "\n You can provide this change as follows: " << endl;
    cout << "Pounds: " << pounds << endl;
    cout << "50 pence: " << fifty << endl;
    cout << "20 pence: " << twenty << endl;
    cout << "10 pence: " << ten << endl;
    cout << "5 pence: " << five << endl;
    cout << "2 pence: " << two << endl;
    cout << "1 pence: " << one << endl;


    return 0;
}