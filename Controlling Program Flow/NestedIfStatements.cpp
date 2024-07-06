/*
    simple nested if statements
    Author: Sebastian Sroczyk
    Date: 06/07/2024
*/

#include <iostream>

using namespace std;

int main(){

    int score{};
    cout << "Please enter your score(0-100): ";
    cin >> score;

    char letter_Grade{};

    if(score >= 0 && score <=100){
        if (score >= 90){
            letter_Grade = 'A';
        }
        else if (score >= 70 && score < 90){
            letter_Grade = 'B';
        }
        else if (score >= 50 && score < 70){
            letter_Grade = 'C';
        }
        else if (score >= 30 && score < 50){
            letter_Grade = 'D';
        }
        else{
            letter_Grade = 'F';
        }
        cout << "Your Score is: " << score << ". Which means your grade is: " << letter_Grade << endl;   

        if (letter_Grade == 'F'){
            cout << "You Failed..." << endl;
        }
        else{
            cout << "You did it."<< endl;
        }
    }
    else{
        cout << "Sorry, " << score << " is not in range"<< endl;
    }

    return 0;
}