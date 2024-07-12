/*
    Nested Loops
    Author: Sebastian Sroczyk
    Date: 12/07/2024
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    for (int i {1}; i <=10; ++i){
        for (int j{1}; j <=10; ++j){
            cout << i << " * " << j << " = " << i*j << endl; 
        }
        cout << "----------------------" << endl;
    }


    int num_Items{};
    
    cout << "How many data items do you have? ";
    cin >> num_Items;

    vector<int> data{};

    for(int i{0}; i < num_Items; i++){
        int data_Item{};
        cout << "Enter data Item " << i + 1 << ": ";
        cin >> data_Item;
        data.push_back(data_Item);
         
        
    }

    cout << "\nDisplaying Histogram" << endl;
    for(auto val: data){
        
        for(int i{1}; i <= val; ++i){
            if (i % 5 ==0 ){
                cout << "*";
            }
            else{
                cout <<"-";
            }
        }
        cout << endl;
    }

}