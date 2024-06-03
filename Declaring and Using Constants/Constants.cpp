/*
    Declaring and using constants
    Author: Sebastian Sroczyk
    Date: 03/06/2024
*/

#include <iostream>

using namespace std;

int main(){
    cout << "Please enter how many small rooms would you like cleaned? " << endl;

    int IntNumberOfSmallRooms {0};
    cin >> IntNumberOfSmallRooms;

    cout << "Please enter how many large rooms would you like cleaned? " << endl;

    int IntNumberOfLargeRooms {0};
    cin >> IntNumberOfLargeRooms;

    // const - a way of setting a constant value that cannot be changed onced initilised
    const int IntPricePerSmallRoom {25};
    const int IntPricePerLargeRoom {35};
    const float FltTax {0.06}; // percent
    
    cout << "Number of Small Rooms selected: " << IntNumberOfSmallRooms << endl;
    cout << "Number of Large Rooms selected: " << IntNumberOfLargeRooms << endl;
    cout << "Price per small room: " << IntPricePerSmallRoom << endl;
    cout << "Price per large room: " << IntPricePerLargeRoom << endl;
    cout << "==================================================" << endl;


    int IntSmallRoomCost {(IntNumberOfSmallRooms * IntPricePerLargeRoom)};
    int IntLargeRoomCost {(IntPricePerLargeRoom * IntPricePerLargeRoom)};

    // operators can be split across lines
    cout << "\nSmall Room Cost: " 
         << IntSmallRoomCost 
         << endl;

    cout << "Large Room Cost: " << IntLargeRoomCost << endl;

    int IntTotalCost {(IntSmallRoomCost + IntLargeRoomCost)};
    float FltTaxAmmout {( IntTotalCost * FltTax)};

    cout << "\nTax: " << FltTaxAmmout << endl;
    cout << "Total: " << (IntTotalCost + FltTaxAmmout) << endl;
    cout << "Estimated experation time for estimate: 30 days." << endl;

    return 0;
}


