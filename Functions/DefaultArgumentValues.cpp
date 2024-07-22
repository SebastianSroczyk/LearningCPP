/*
    How to implement Default Argument Values
    Author: Sebastian Sroczyk
    Date: 22/07/2024
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*

    Defualt Argument Values - Sometimes some values are always the same, we can tell the compiler to use a defualt value if the argument is not supplied.
                              Defualt vlaues can be in the prototype or the definition, but not both, best practice is to put it in the prototype.

                              Example without defualt argument values:

                                        double calc_cost (double base_cost, double tax_rate);

                                        double calc_cost (double base_cost, double tax_rate){
                                            return base_cost += (base_cost * tax_rate);
                                        }

                                        int main(){
                                            double cost {0};
                                            cost = calc_cost (100.0, 0.06); // the argumentneeds to be constantly supplied 
                                            return 0;
                                        }
                            
                              Example with default argument value:

                                        double calc_cost (double base_cost, double tax_rate = 0.06);  //  <----- Change was done here

                                        double calc_cost (double base_cost, double tax_rate){
                                            return base_cost += (base_cost * tax_rate);
                                        }

                                        int main(){
                                            double cost {0};
                                            cost = cal_cost(200);      // will use defualt tax_rate
                                            cost = calc_cost (100.0, 0.08);     // overrides the defualt tax_rate 
                                            return 0;
                                        }

*/

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr", string suffix = " ");

int main(){

    double cost{};
    cost = calc_cost(100.0,0.08,4.25); // will not used defaults as all parameters are overridden

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl; // 112.25

    cost = calc_cost(100.0,0.08); // will used defualt shipping
    cout << "Cost is: " << cost << endl; // 111.50

    cost = calc_cost(100.0); // will used defualt shipping and tax rate
    cout << "Cost is: " << cost << endl; // 109.50




    greeting("Glen Joes", "Dr", "M.D.");

    greeting("Jannet Loves", "Mrs");

    greeting("David Robs");


    return 0;
}

double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost*tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix){

    cout << "Hello " << prefix + ". "+  name +  " " +  suffix << endl;
}