/*
    What is a function
    Author: Sebastian Sroczyk
    Date: 22/07/2024
*/

/*
    Functions: Allow the modularization of a program and is a step into OOP
  
*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath> // used for math functions
#include <cstdlib> // used for random function 
#include <ctime> // used for time function

using namespace std;

/*
        The functions above main() here are called 'Prototypes'

        Prototype Functions - Tell the compiler what it needs to know iwthout a full function definition (AKA forward declarations)
                              
                              NOTE: must ALWAYS be placed at the beginning of the program/place them in our own header files that we call

                              Example: 

                                        void this_function(int a);
    

        Functions Parameters() - Are passed by value, which means a copy is made then used. This is both good and bad. It means we don't have to worry about accidentaly
                               modifying a value, but copying centain values can be a very expensive task which in bigger project may slow down a computer by using
                               too much storage and too much processing time. (Bad for optimization) 

                               Example:
                                        int main(){
                                            int num{55};

                                            this_function(num);         // Here 55 is passed into the fucntion, This is also a example of a actual parameter (i.e. num)
                                            return 0;
                                        }

                                        void this_function(int a){                // a - is an example of a formal parameter
                                            cout << a << " is something" << endl;       // The function then makes a copy of 55 in memory and uses it to display "55 is something"
                                        }

                               NOTE: Sometimes we want to change the variable that is accessed. 

        
                             
*/
int display_Add_Num();
int add_Num(int a,int b);
void display_CMath(int num);
void display_Random();
void area_circle();
void volume_cylinder();
double calc_Area_Circle(double radius);

void pass_by_vector1(int num);
void pass_by_vector2(string s);
void pass_by_vector3(vector<string> v) ;
void display_vecotr(vector<string> v);



int main(){
    int num1{};

    



    num1 = display_Add_Num();

    cout << num1 << endl; 
    pass_by_vector1(num1); // Num1 stays the same even though we have changed in it the function. Only the copy was changed.
    cout << num1 << endl;


    display_CMath(num1);
    display_Random();
    area_circle();
    volume_cylinder();
    return 0;
}

void pass_by_vector1(int num){
    num = 1000;
}

void pass_by_vector2(string s){
    s = "Changed";
}

void pass_by_vector3(vector<string> v){
    v.clear();
}

void display_vecotr(vector<string> v){
    for(auto s: v){
        cout << s << " ";
    }
    cout << endl;
}

int display_Add_Num(){
    int num1{}, num2{};

    cout << "Enter the numbers you would like to add together with a space inbetween them: ";
    cin >> num1 >> num2; 
    int answer{};
    answer = add_Num(num1,num2);
    cout << num1 << " + " << num2 << " = " << answer << endl;
    return num1;
}

int add_Num(int a, int b){
    int answer = a + b;
    return answer;
}

void display_CMath(int num){
    cout << "Displaying cmath:\n=========================================="<< endl;
    cout << "The square root of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;
    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;
    cout << "The ceiling of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
}   

void display_Random(){
    int randomNum{};

    size_t count {10};
    int min {1};
    int max {6};

    cout << "RAND_MAX on system is: " << RAND_MAX << endl;
    srand(time(nullptr)); // seeding the random number generator - if we do not seed the generator we will get the same requence random numbers every run.

    for (size_t i{1}; i <= count; ++i){
        randomNum = rand() % max + min;  // Generating a random number between min and max
        cout << randomNum << endl;
    }
}

void area_circle(){
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The area of the circle with radius " << radius << " is " << calc_Area_Circle(radius) << endl;
}

void volume_cylinder(){
    double radius{}, height{};    
    cout << "Enter the raduis of the cylinder followed by the height, with a space inbetween them: ";
    cin >> radius >> height;

    cout << "The volume of the circle with radius " << radius << " and height of " << height << " is " << calc_Area_Circle(radius) * height << endl;
}

double calc_Area_Circle(double radius){

    const double pi {3.14159};
    return pi * pow(radius,2);
}