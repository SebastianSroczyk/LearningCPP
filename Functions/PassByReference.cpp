/*
    Using pass by preference to modify parameters.
    Author: Sebastian Sroczyk
    Date: 24/07/2024
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
        Pass by refrence - Is a way to modify a parameter simular to how an array is able to be modified. We need to get the memory address of the actaul parameter be to able to modify it.
                           We do this by using the amper sign ( i.e. &) in front of the parameter in a function. This is also called a reference parameter and it turns the formal
                           parameter into an alias for the actual parameter.


                           Example:

                                        void_scale_number(int &num);   // prototype of a function using a reference parameter. Actual data location.

                                        // vs

                                        // void_scale_number (int num);   // prototype of a function using the copy of the data

                                        int main(){
                                        
                                            int number {1000};
                                            scale_number(number);       // call
                                            cout << number << endl;     // 100
                                            return 0;
                                        }

                                        void void_scale_number(int &num){       // definition

                                            if(num > 100){
                                                num = 100;
                                            }
                                        }
                            
                            NOTE: using pass by reference instead of pass by value allows the programs to lite, as we don't need to allocate extra storage to a copy of the values we 
                                  are working on, like it is done in pass by value. Pass by prefrence is the direct memory access to the data. Pass by value makes a copy of the data.

                            Example 2:

                                        This example shows a print fucntion using a pass by reference. However we don't want to accidentally modify the vector, so we can put
                                        a const, just like we did with the arrays. 

                                        void print (const std::vector<int> &v);

                                        int main(){
                                            std::vector<int> data {1,2,3,4,5};
                                            print(data);
                                            return 0;
                                        }

                                        void print (const std::vector<int> &v){
                                            for (auto num: v){
                                                cout << num << endl;
                                            }
                                        }

                                        NOTE: This is a more efficident way of passing data while protecting the data from being change by mistake.

*/

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void display_ref3(const vector<string> &v);

int main(){

    int num{10};
    cout << "Before calling pass_by_ref1: " << num << endl; // 10
    pass_by_ref1(num); // Changes num
    cout << "After calling pass_by_ref1: " << num << endl; // 1000

    string str{"This string"};
    cout << "Before calling pass_by_ref2: " << str << endl; // 10
    pass_by_ref2(str); // Changes string
    cout << "After calling pass_by_ref2: " << str << endl; // 1000
    
    vector<string> str_vec {"This vector string"};
    display_ref3(str_vec);
    pass_by_ref3(str_vec);
    display_ref3(str_vec);
    
    return 0;
}


void pass_by_ref1(int &num){
    num = 1000;
}

void pass_by_ref2(string &s){
    s = "Changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear();
}

void display_ref3(const vector<string> &v){
    cout << "New vec: ";
    for(auto s: v){
        cout << s << " ";
    }
    cout << endl;
}
