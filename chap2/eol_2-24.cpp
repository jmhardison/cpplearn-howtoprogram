/*
odd or even, read in two numbers and determin and prints wether each integer as well as the sum of the two integers is and odd number.
*/

#include <iostream>

using namespace std;

int main(){
    int number1{0};
    int number2{0};
    int sum{0};

    cout << "Provide two integers: ";
    cin >> number1 >> number2;

    //sum
    sum = number1 + number2;

    //no remainder = even
    if((number1 % 2) == 0){
        cout << number1 << " is even." << endl;
    }
    if((number2 % 2) == 0){
        cout << number2 << " is even." << endl;
    }


    //remainder = odd
    if((number1 % 2) != 0){
        cout << number1 << " is odd." << endl;
    }
    if((number2 % 2) != 0){
        cout << number2 << " is odd." << endl;
    }

    //check sum now
    if((sum % 2) == 0){
        cout << "The sum, " << sum << ", is even." << endl;
    }
    if((sum % 2) != 0){
        cout << "The sum, " << sum << ", is odd." << endl;
    }

}