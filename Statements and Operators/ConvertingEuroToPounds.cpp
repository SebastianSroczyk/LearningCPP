/*
    Practice work with assignment and arithmetic operators
    Author: Sebastian Sroczyk
    Date: 06/06/2024
*/
#include <iostream>

using namespace std;

int main(){

    const double euro_per_gbp{0.85};

    cout << "Please enter the amount of Euros you would like to convert to Great British Pounds (GBP): €";

    double euro_to_convert{0.00};
    cin >> euro_to_convert;

    double converted_gdp{0.00};
    converted_gdp = euro_to_convert * euro_per_gbp;

    cout << "\nThe total converted Euros to Great British Pounds is: £" << converted_gdp << endl;


    return 0;
}