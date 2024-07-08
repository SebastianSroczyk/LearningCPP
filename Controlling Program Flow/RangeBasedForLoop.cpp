/*
    conditional Operator
    Author: Sebastian Sroczyk
    Date: 07/07/2024
*/

#include <iostream>
#include <vector>
#include <iomanip>
/*
    Added in C++11: 
    Range-based For Loop: Allows easy access to each element without having to worry about incremented or decrementing.

    Example: 
    
    for (var_Type var_Name: sequence){
        statement; 
    }

    note: can use var_Name in the statement.

    The Auto keyword can be used instead of setting the type. This allows C++ to automaticly detect the variable type.

*/

using namespace std;

int main(){

    int scores[] {10, 20, 30};

    for (int score: scores){
        cout << score << endl;
    }

    cout << endl;

    vector <double> tempratures {15.7,22.1,12.4,17.3,16.7};
    double average_Temp{};
    double total {};

    for (auto temp: tempratures){
        total += temp;
    }
    /*
    if (tempratures.size() != 0){
        average_Temp = total/tempratures.size();
    }

    OR
    */
    ((tempratures.size() != 0 ) ? average_Temp = total/tempratures.size() : average_Temp == 0.0000);

    cout << fixed << setprecision(1); // Rounding the average_Temp to 1 decimal point
    cout << "Average Temprature this year was " << average_Temp << " degress Celcious "<< endl;

    cout << endl;

    for (auto val: {1,2,3,4,5}){
        cout << val << endl;
    }

    cout << endl;

    for (auto c: "This is a test"){
        if(c != ' '){
            cout << c;
        }
    }

    cout << endl;

    for (auto c: "This is a test No.2"){
        if(c == ' '){
            cout << "\t";
        }
        else{
            cout << c;
        } 
    }

    return 0;
}