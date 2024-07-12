/*
    Section 9 Challenge
    Author: Sebastian Sroczyk
    Date: 12/07/2024
*/

#include <iostream>
#include <vector>

/*
Challenge:

    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
        P - Print numbers
        A - Add a number
        M - Display mean of the numbers
        S - Display the smallest number
        L - Display the largest number
        Q - Quit

        Enter your choice:
    
    The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
    If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
    displayed again.


    If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
    If the list is empty you should display "[] - the list is empty"
    If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
    For example, [ 1 2 3 4 5 ]
      
    If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
    which you will add to the list and then display it was added. For example, if the user enters 5
    You should display, "5 added".
    Duplicate list entries are OK

    If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
    If the list is empty you should display, "Unable to calculate the mean - no data"

    If the user enters 'S' or 's' you should display the smallest element in the list.
    For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
    If the list is empty you should display, "Unable to determine the smallest number - list is empty"

    If the user enters 'L' or 'l' you should display the largest element in the list
    For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
    If the list is empty you should display, "Unable to determine the largest number - list is empty"

    If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

    Before you begin. Write out the steps you need to take and decide in what order they should be done.
    Think about what loops you should use as well as what you will use for your selection logic.

    This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

    Finally, be sure to test your program as you go and at the end.

Extention Task:

    Additional functionality if you wish to extend this program.

    - search for a number in the list and if found display the number of times it occurs in the list       (DONE)
    - clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)           (DONE)
    - don't allow duplicate entries
*/

using namespace std;

int main(){

    bool has_Finished{false};
    vector<int> list_Of_Integers{};

    while(!has_Finished){
        
        char choice{};

        cout << "\n==============================" << endl;
        cout << "D - Display numbers" << endl;
        cout << "A - Add numbers" << endl;
        cout << "M - Display the mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "K - Search for specific number" << endl;
        cout << "X - Clear out list" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice){

            case 'd':
            case 'D':{
                if(list_Of_Integers.size() == 0){
                    cout << "[] - the list is empty" << endl;
                }
                else{
                    cout << "[ ";
                    for(auto val:list_Of_Integers){
                        cout << val << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            }
            case 'a':
            case 'A':{
                int num{};
                cout << "\nEnter the number you would like to add to the list: ";
                cin >> num;

                bool num_Repeats{false};
                for(auto val: list_Of_Integers){
                    if(num == val){
                        num_Repeats = true;
                    }
                }
                
                if(num_Repeats){
                    cout << "This number is already in the list, try a different number." << endl;
                }
                else{
                    list_Of_Integers.push_back(num);
                }
                break;
            }
            case 'm':
            case 'M':{
                if(list_Of_Integers.size() == 0){
                    cout << "Unable to calculate the mean - no data" << endl;
                }
                else{
                    int total{};
                    int mean{};
                    for(auto val:list_Of_Integers){
                        total += val;
                    }
                    mean = total / list_Of_Integers.size();
                    cout << "\nThe mean is: "<< mean << endl;
                }
                break;
            }
            case 's':
            case 'S':{
                if(list_Of_Integers.size() == 0){
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                }
                else{
                    int smallest{list_Of_Integers.at(0)};
                    for(auto val: list_Of_Integers){
                        if(val < smallest){
                            smallest = val;
                        }
                    }
                    cout << "\nThe smallest number is " << smallest << endl;
                }
                break;
            }
            case 'l':
            case 'L':{
                if(list_Of_Integers.size() == 0){
                    cout << "Unable to determine the largest number - list is empty" << endl;
                }
                else{
                    int largest{list_Of_Integers.at(0)};
                    for(auto val: list_Of_Integers){
                        if(val > largest){
                            largest = val;
                        }
                    }
                    cout << "\nThe largest number is " << largest << endl;
                }
                break;
            }
            case 'k':
            case 'K':{
                if(list_Of_Integers.size() == 0){
                    cout << "Unable to search - list is empty" << endl;
                }
                else{
                    int searched_Num{};
                    int num_Of_Nums{};
                    cout << "\nWhat number do you want to search for? ";
                    cin >> searched_Num;

                    for(auto val:list_Of_Integers){
                        if(searched_Num == val){
                            ++num_Of_Nums;
                        }
                    }
                    cout << "\n"<< searched_Num << " is found " << num_Of_Nums << " times in the list." << endl;
                }
                break;
            }
            case 'x':
            case 'X':{
                if(list_Of_Integers.size() == 0){
                    cout << "List is already empty" << endl;
                }
                else{
                    list_Of_Integers.clear();
                }
                break;
            }
            case 'q':
            case 'Q':{
                has_Finished = true;
                break;
            }
            default:{

                cout << "\nSorry this isn't a valid choice please try again." << endl;
            }
        }
    }
    cout << "Goodbye..." << endl;
    return 0;
}