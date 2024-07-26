/*
    Pass by refrence with pointers 
    Author: Sebastian Sroczyk
    Date: 26/07/2024
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
    L-values - values that have a name and are addressable, these values can be modified if they are not constants.

        Example:

                int x {100};                // x is a L-value

                string str {"Hello"}        // str is a L-value

        What is not an L-Value:

                100 = x;            // 100 is NOT an L-value
                (100 - 10) = x;     // 100 - 10 is NOT an L-value

                string name;
                name = "Seba";
                "Seba" = name;      // Seba is NOT a L-value

    R-Values - A non-addressable and non-assignable value.

        Example:

                int x{100};         // 100 is a R-value
                int y = x + 200;    // (x + 200) is an R-value

                string name;
                name = "Seba"       // Seba is a R-value

                int max_num = max(20,30);       // max(20,30) is a r-value;

    NOTE: R-Values can be assigned to L-Values explicitly.


*/


int main(){

    return 0;
}