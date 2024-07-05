/*
    Compound Assignment Operators
    Author: Sebastian Sroczyk
    Date: 05/07/2024
*/

#include <iostream>

/* ======================================================================

    Operator                Example                   Meaning

    --------------------- Mathematical Operators----------------------  NOTE: Used for maths

    +=                      lhs += rhs;               lhs = lhs + (rhs)
    -=                      lhs -= rhs;               lhs = lhs - (rhs)
    *=                      lhs *= rhs;               lhs = lhs * (rhs)  I.e. Multiply lhs by rhs and store product in lhs
    /=                      lhs /= rhs;               lhs = lhs / (rhs)  I.e. Devide lhs by rhs and store product in lhs
    %=                      lhs %= rhs;               lhs = lhs % (rhs)

    --------------------- Bit-wise Operators-------------------------- NOTE: Used to manipulate Bits

    >>=                     lhs >>= rhs;              lhs = lhs >> (rhs)
    <<=                     lhs <<= rhs;              lhs = lhs << (rhs)
    &=                      lhs &= rhs;               lhs = lhs & (rhs)
    ^=                      lhs ^= rhs;               lhs = lhs ^ (rhs)
    |=                      lhs |= rhs;               lhs = lhs | (rhs)  

======================================================================= */



using namespace std;

int main(){
    
    const double tax{1.2};
    const double price_Per_Tile{3.25};
    int ammount_Of_Tiles{};

    cout << "Enter the number of tiles you would like to buy: ";
    cin >> ammount_Of_Tiles;

    double total{};
    total += ammount_Of_Tiles * (price_Per_Tile * tax);

    cout << "You are spending: £" << total << endl;


    return 0;
}