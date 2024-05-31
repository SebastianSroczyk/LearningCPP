/*
    Declaring And Initialising Variables
    Author: Sebastian Sroczyk
    Date: 31/05/2024
*/

#include <iostream>

using namespace std;

int age {19}; // Global Variable - can be used anywhere inside the class very unsafe should be used often or at all.


// Calculating area of a room in meters

int main() {

    cout << "Enter the width of the room: ";

    // {} - Brace initalisation: Another way of initialising variables which is safer and more percise comapred to = (copy initialisation)
    int roomWidth {0};

    cin >> roomWidth;

    cout << "Enter the height of the room: ";

    int roomHeight {0};

    cin >> roomHeight;

    cout << "Enter the length of the room: ";

    int roomLength {0};

    cin >> roomLength;

    int totalRoomSize = roomHeight * roomLength * roomWidth;

    cout << "Total room size is: " << totalRoomSize << "meters cubed!" << endl;


    cout << "Global Age: " << age << endl;
    return 0;
}