/*
write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, and quotient fo the two numbers.
*/

#include <iostream>

using namespace std;

int main(){
    int number1{0}, number2{0};

    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    //sum
    cout << "The sum is: " << (number1 + number2) << endl;

    //product
    cout << "The product is: " << (number1 * number2) << endl;

    //difference ignoring size
    cout << "The difference is: " << (number1 - number2) << endl;

    //quotient ignoring size
    cout << "The quotient is: " << (number1 / number2) << endl;

}