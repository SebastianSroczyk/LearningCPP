/*
    Section 11 Challenge - menu
    Author: Sebastian Sroczyk
    Date: 24/07/2024
*/

// Section 11 Challenge 
/*
     Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/
/*    
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

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Prototypes:
//==============================================================================================
void display_List(const vector<int> &list_Of_Integers);
void display_Menu();
char get_input();
void select_Choice(const char choice, vector<int> &list_Of_Integers, bool &has_Finished);
void display_Number(const vector<int> &list_Of_Integers);
void add_Numbers(vector<int> &list_Of_Integers);
void display_Mean(const vector<int> &list_Of_Integers);
void display_smallest(const vector<int> &list_Of_Integers);
void display_largest(const vector<int> &list_Of_Integers);
void search_Number(const vector<int> &list_Of_Integers);
void clear_List(vector<int> &list_Of_Integers);
//==============================================================================================

// main
int main(){
 
    static bool has_Finished{false};
    static vector<int> list_Of_Integers{};

    while(!has_Finished){
        display_Menu();
        select_Choice(get_input(), list_Of_Integers, has_Finished);
    }

}

// Functions:
//==============================================================================================

void display_List(const vector<int> &list_Of_Integers){
    cout << "[ ";
    for(auto val:list_Of_Integers){
        cout << val << " ";
    }
    cout << "]" << endl;
}

void display_Menu(){

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
}

char get_input(){
    char choice{};  
    cin >> choice;
    return toupper(choice);
}

void select_Choice(const char choice, vector<int> &list_Of_Integers, bool &has_Finished){

    switch(choice){

            case 'D':{
                display_Number(list_Of_Integers);
                break;
            }
            case 'A':{
                add_Numbers(list_Of_Integers);
                break;
            }
            case 'M':{
                display_Mean(list_Of_Integers);
                break;
            }
            case 'S':{
                display_smallest(list_Of_Integers);
                break;
            }
            case 'L':{
                display_largest(list_Of_Integers);
                break;
            }
            case 'K':{
                search_Number(list_Of_Integers);
                break;
            }
            case 'X':{
                clear_List(list_Of_Integers);
                break;
            }
            case 'Q':{
                has_Finished = true;
                break;
            }
            default:{

                cout << "\nSorry this isn't a valid choice please try again." << endl;
            }
        }
}

void display_Number(const vector<int> &list_Of_Integers){
    if(list_Of_Integers.size() == 0){
        cout << "[] - the list is empty" << endl;
    }
    else{
        display_List(list_Of_Integers);
    }
}

void add_Numbers(vector<int> &list_Of_Integers){
    int num{};
    cout << "\nEnter the number you would like to add to the list: ";
    cin >> num;

    bool num_Repeats{false};
    for(auto val: list_Of_Integers){
        if(num == val){
            num_Repeats = true;
            break;
        }
    }
    if(num_Repeats){
        cout << "This number is already in the list, try a different number." << endl;
    }
    else{
        list_Of_Integers.push_back(num);
    }
}

void display_Mean(const vector<int> &list_Of_Integers){
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
}

void display_smallest(const vector<int> &list_Of_Integers){
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
}

void display_largest(const vector<int> &list_Of_Integers){
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
}

void search_Number(const vector<int> &list_Of_Integers){
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
}

void clear_List(vector<int> &list_Of_Integers){
    if(list_Of_Integers.size() == 0){
        cout << "List is already empty" << endl;
    }
    else{
        list_Of_Integers.clear();
    }
}
//==============================================================================================
