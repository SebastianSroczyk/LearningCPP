/*
    simple shipping cost calculator
    Author: Sebastian Sroczyk
    Date: 06/07/2024
*/

#include <iostream>

/*
    Shipping cost calculator 

    ask for user package dimentions in centimeters
    length width and height, should be integers

    all dimentions must be 26cm or less 

    base cost : £1.70
    if package volume is greater than 1600 cm^3 there is a 10% surcharge
    if package volume is greater than 8200 cm^3 there is a 25% surcharge

*/


using namespace std;

int main(){

    int length{}, width{}, height{};
    double base_Cost{1.70};

    const int max_Dimention{26};
    const int tier_One_Threshold{1600};
    const int tier_Two_Threshold{8200};
    const double tier_One_Surcharge{1.10};
    const double tier_Two_Surcharge{1.25};

    cout << "We cannot Ship packages larger than: 26cm x 26cm x 26cm";
    cout << "\nPlease enter the dimentions of your package with spaces inbetween dimentions. (L x W x H): ";
    cin >> length >> width >> height;

    if(length <= max_Dimention && width <= max_Dimention && height <= max_Dimention){
        
        int volume{length * width * height};
        double total_Cost{};

        if(volume > tier_One_Threshold && volume <= tier_Two_Threshold){
            total_Cost = base_Cost * tier_One_Surcharge;
        }
        else if(volume > tier_Two_Threshold){
            total_Cost = base_Cost * tier_Two_Surcharge;
        }
        else{
            total_Cost = base_Cost;
        }
        cout << "Your Total shipping cost is: £" << total_Cost << endl;
    }
    else{
        cout << "Sorry this package is too large.";
    }
    return 0;
}