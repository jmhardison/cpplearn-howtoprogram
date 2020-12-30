/*
write a program that reads in five integers and prints the largest an the smallest in the group.
*/

#include <iostream>

using namespace std;

int main(){
    int number1{0};
    int number2{0};
    int number3{0};
    int number4{0};
    int number5{0};

    int largest{0};
    int smallest{0};

    cout << "Provide 5 integers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    largest = number1;
    smallest = number1;

    if(largest < number2)
    {
        largest = number2;
    }
    if(largest < number3){
        largest = number3;
    }
    if(largest < number4){
        largest = number4;
    }
    if(largest < number5){
        largest = number5;
    }

    if(smallest > number2){
        smallest = number2;
    }
    if(smallest > number3){
        smallest = number3;
    }
    if(smallest > number4){
        smallest = number4;
    }
    if(smallest > number5){
        smallest = number5;
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

}