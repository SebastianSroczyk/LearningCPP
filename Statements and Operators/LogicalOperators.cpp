/*
    Logical Operators
    Author: Sebastian Sroczyk
    Date: 05/07/2024
*/

#include <iostream>

/*==============================================

   Operator  | Meaning
! (or) not   | negative     I.e. Reverses the operand so a true becomes a false
&& (or) and  | logical and  I.e. Returns true if both operands are true
|| (or) or   | logical or   I.e. Returns true if either operand is true

    NOTE: Not operator has top priority, then it is the And operator followed by the Or opertor.

    Short-Circuit Evaluation:

        - When evaluation a logical expression C++ stops as soon as the result is known. This can be used to optimize code.
            Example 1: express1 && express2 && express3 - The compiler will stop if express1 is false, and not check express2 or express3. Which helps with optimization.
            Example 2: express1 || express2 || express3 - The compiler will stop if express1 is true, else it will continue looking at expression 2 and 3 to get the answer.
        

================================================*/

using namespace std;

int main(){

    int num {};
    const int lower {10};
    const int upper {20};

    cout << boolalpha;

    // Determine if an entered intgeter is between two other integers
    // assume lower < upper

    cout << "Enter an Integer - the bounds are " << lower << "-" << upper << ": ";
    cin >> num;

    bool within_Bounds {false};

    within_Bounds = ( num > lower && num < upper);
    cout << "\nIs " << num << " within the bounds? Answer: " << within_Bounds << endl;

    bool outside_Bounds {false};
    // Determine if an entered intgeter is outside two other integers
    outside_Bounds = ( num < lower || num > upper);
    cout << "Is " << num << " outside the bounds? Answer: " << outside_Bounds << endl;

    bool on_Bounds {false};
    // Determine if an entered intgeter is outside two other integers
    on_Bounds = ( num == lower || num == upper);
    cout << "Is " << num << " outside the bounds? Answer: " << on_Bounds << endl;


    /*========================================
            Different Example:
    ========================================*/

    // Determine if you need to wae a coat based on temperature and wind speed.

    bool wear_Coat{false};
    double temperature{};
    int wind_Speed{};

    const int wind_Speed_For_Coat {5};
    const int temperature_For_Coat {7};

    cout << "\nEnter the current temperature in (Celcius): ";
    cin >> temperature;
    cout << "\nEnter the current wind speed in (kph): ";
    cin >> wind_Speed;

    wear_Coat = (wind_Speed >= wind_Speed_For_Coat || temperature <= temperature_For_Coat);
    cout << "Do you need a coat? Answer: " << wear_Coat << endl;


    return 0;
}