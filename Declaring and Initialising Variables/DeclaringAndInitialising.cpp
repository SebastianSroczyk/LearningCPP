/*
    Declaring And Initialising Variables
    Author: Sebastian Sroczyk
    Date: 31/05/2024
*/

#include <iostream>

using namespace std;

int age {19}; // Global Variable - can be used anywhere inside the class very unsafe should be used often or at all.

/*

List initialization does not allow narrowing (§iso.8.5.4). That is:

- An integer cannot be converted to another integer that cannot hold its value. For example, char to int is allowed, but not int to char.
- A floating-point value cannot be converted to another floating-point type that cannot hold its value. For example, float to double is allowed, but not double to float.
- A floating-point value cannot be converted to an integer type.
- An integer value cannot be converted to a floating-point type.

*/

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