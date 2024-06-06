/*
    Working on Vectors
    Author: Sebastian Sroczyk
    Date: 05/06/2024
*/

#include <iostream>

// To use vecotrs we need to include the vector library (#include <vector>) 
#include <vector>

using namespace std;

int main(){

    // vectors are objets so they use a constructer to declare and initialize them.
    // Vectors also set themselves to 0 automaticly so we do not need to specify that.
    vector <char> number (0);

    // here we are declaring the vector vowels to all the vowels using list initialization ({} - list initialization) 
    vector <char> vowels {'a','e','i','o','u'};

    // Here we are declairing the vector highTemperatures via a constructor ( () - constructor call )
    // This allows us to set the size of the vector ( 365 in this case ) , and set what the default value of each element is ( 30.1 in this case) 
    vector <double> highTemperatures (365,30.1);

    cout << "Temp at vector 1: " << highTemperatures[0] << endl;
    cout << "Temp at vector 2: " << highTemperatures[55] << endl;

    vector <double> lowTemperatures {12.2, 7.76, 3.5};

    // To access each element in the vector we can use the name of the vector followed by square brackets just like in arrays []
    cout << "\nTemp at vector 1: " << lowTemperatures[0] << endl;
    cout << "Temp at vector 2: " << lowTemperatures[1] << endl;
    cout << "Temp at vector 3: " << lowTemperatures[2] << endl;

    // Or...
    //We can also access vector elements but using the .at(int index) method.


    cout << "\nTemp at vector 1: " << lowTemperatures.at(0) << endl;
    cout << "Temp at vector 2: " << lowTemperatures.at(1) << endl;
    cout << "Temp at vector 3: " << lowTemperatures.at(2) << endl;

    /*
        Arrays don't tend to provide bounds checks however vectors do.
        This is very useful as when we encounter an out of index error
        the error gets thrown out and displayed to us. Which doesn't
        happen with arrays.
    */
    //               INDEX:  [0 ,  1,  2,   3,  4,  5,  6,  7] 
    vector <int> scoreVector {30, 70, 90, 100, 32, 76, 85, 22};
    cout << "\n Enter a test score to add to the vector: ";

    int scoreToAdd {0};
    cin >> scoreToAdd;

    // The .push_back method adds the scoreToAdd value to the end of the vecotr (in this case that would be at index 8 aka the 9th score)
    scoreVector.push_back(scoreToAdd);

    cout << "\n Test Scores are now: "<< endl;

    for(int i {0}; i < scoreVector.size(); i++){
        cout << "Score " << i << ": " << scoreVector.at(i) << endl;
    }

    // Simple 2D Vector
    // very simular if not identical to an 2D array
    vector <vector<int>> movieRatings{
        {1,5,3,4},
        {1,2,4,4},
        {1,4,3,5}
    };

    // To access it we can use array syntax ( [][] - Double square brackets),
    // OR we can use .at(int rowIndex).at(int collumIndex)

    cout << "Rating at index 0,2: " << movieRatings[0][2] << endl;
    cout << "Rating at index 0,2: " << movieRatings.at(0).at(2) << endl;
    
    return 0;
}