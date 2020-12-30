/*
factors - write a program that reads in three integers and determines and prints if the first two integers are factors of the third.
*/

#include <iostream>

using namespace std;

int main(){
    int number1{0};
    int number2{0};
    int number3{0};

    cout << "Provide 3 integers: ";
    cin >> number1 >> number2 >> number3;

    if((number1 % number3) == 0 && (number2 % number3) ==0){
        cout << number1 << " and " << number2 << " are factors of " << number3 << endl;
    }
    else{
        cout << number1 << " and " << number2 << " are not factors of " << number3 << endl;
    }
}