/*
    The Dynamic memory allocation of an integer array.
    Author: Sebastian Sroczyk
    Date: 09/08/2024
*/

/*
    TASK:   
            Create a program that dynamically allocates an array of 10 integers. 
            Fill this array with values from 0 to 9 (i.e., 0, 1, 2, ..., 9). 
            Then, print out these values.
*/

#include <iostream>
#include <string>

using namespace std;

// Function Prototypes


void Populate_Array(int *arrLocation, const size_t arrSize);
void Display_Array(int *arrLocation, const size_t arrSize); 


int main(){
    
    
    size_t arrSize{0};
    cout << "Enter the size you would like the array to be: ";
    cin >> arrSize;
    int *arr_ptr = new int [arrSize];

    Populate_Array(arr_ptr,arrSize);
    Display_Array(arr_ptr,arrSize);

    delete [] arr_ptr;
    return 0;
}

void Populate_Array(int *arrLocation, const size_t arrSize){
    int startingNum {0};

    for(size_t i{0}; i < arrSize; ++i){
        arrLocation[i] = startingNum++;  // could refactor it to use i. I.e.     arrLocation[i] = i;  There is no need for assigning another variable.
    }
}
void Display_Array(int *arrLocation, const size_t arrSize){
    cout << "Array: " << endl;
    for(size_t i{0}; i < arrSize; ++i){
        cout << arrLocation[i] << endl;
    }
}