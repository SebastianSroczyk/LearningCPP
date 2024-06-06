/*
    Section Challenge, working with vectors and arrays.
    Author: Sebastian Sroczyk
    Date: 06/06/2024
*/

#include<iostream>
#include<vector>

using namespace std;



int main() {

    
    vector<int> vector1;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Index 0 of vector1: "<< vector1.at(0) << " and the vector size is: " << vector1.size() << endl;
    cout << "Index 1 of vector1: "<< vector1.at(1) << " and the vector size is: " << vector1.size() << endl;

    vector<int> vector2;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nIndex 0 of vector2: "<< vector2.at(0) << " and the vector size is: " << vector2.size() << endl;
    cout << "Index 1 of vector2: "<< vector2.at(1) << " and the vector size is: " << vector2.size() << endl;

    vector<vector<int>> vector_2d;

    /*
        NOTE:   When using .push_back() the object we are adding is a copy of the object. It is not the same object.
                So no matter if we change the value the object that got added stays the same. (This does not work with pointers)
    */

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nIndex 0 of vector_2d: "<< vector_2d.at(0).at(0) << endl;
    cout << "Index 0 of vector_2d: "<< vector_2d.at(1).at(0) << endl;
    cout << "Index 0 of vector_2d: "<< vector_2d.at(0).at(1) << endl;
    cout << "Index 0 of vector_2d: "<< vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "\nUpdated Vector" << endl;
    cout << "Index 0,0 of vector_2d: "<< vector_2d.at(0).at(0) << endl;
    cout << "Index 1,0 of vector_2d: "<< vector_2d.at(1).at(0) << endl;
    cout << "Index 0,1 of vector_2d: "<< vector_2d.at(0).at(1) << endl;
    cout << "Index 1,1 of vector_2d: "<< vector_2d.at(1).at(1) << endl;
    
    cout << "\nIndex 0 of vector1: "<< vector1.at(0) << " and the vector size is: " << vector1.size() << endl;
    cout << "Index 1 of vector1: "<< vector1.at(1) << " and the vector size is: " << vector1.size() << endl;

    return 0;
}