/*
reverse 4 digits order and output.
*/

#include <iostream>

using namespace std;

int main(){
    int number1{0};
    int digit1{0}, digit2{0}, digit3{0}, digit4{0};
    int holder{0};

    cout << "Provide a 4 digit number: ";
    cin >> number1;

    //cal reverse
    digit1 = number1 / 1000;
    holder = number1 % 1000;

    digit2 = holder / 100;
    holder = holder % 100;

    digit3 = holder / 10;
    digit4 = holder % 10;
        

    cout << "Reversed: " << digit4 << digit3 << digit2 << digit1 << endl;


}