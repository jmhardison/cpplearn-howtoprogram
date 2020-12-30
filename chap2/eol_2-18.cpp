/*
comparing integers - write a program that asks the user to enter two integers, obtains the nubmers from the user. If the numbers are not equal print the message "these numbers are not equal"
then print the smaller number followed by the words "is smaller"
*/

#include <iostream>

using namespace std;

int main(){
    int number1{0};
    int number2{0};
    
    cout << "Welcome to C++ Programming" << endl;
    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    if(number1 != number2){
        cout << "These numbers are not equal" << endl;
        if(number1 < number2){
            cout << number1 << " is the smallest." << endl;
        }
        else{
            cout << number2 << " is the smallest." << endl;
        }
    }
    else
    {
        cout << "The numbers are equal." << endl;
    }
    

    
}