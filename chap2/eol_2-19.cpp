/*
arithmetic, smallest and largest
write a program that inputs three integers from the keyboard nad prints the sum, average, product, smallest and largest of these numbers.
*/

#include <iostream>

using namespace std;

int main(){
    int number1{0};
    int number2{0};
    int number3{0};
    int sum{0};
    
    int smallest{0};
    int largest{0};

    cout << "Enter three different integers: ";
    cin >> number1 >> number2 >> number3;

    //calc sum/print
    sum = number1 + number2 + number3;
    cout << "Sum is " << sum << endl;

    //calc average
    cout << "Average is " << (sum / 3) << endl;

    //calc product
    cout << "Product is " << (number1 * number2 * number3) << endl;

    //calc smallest
    smallest = number1;
    if(smallest > number2){
        smallest = number2;
    }
    if(smallest > number3){
        smallest = number3;
    }
    cout << "Smallest is " << smallest << endl;

    //calc largest
    largest = number1;
    if(largest < number2){
        largest = number2;
    }
    if(largest < number3){
        largest = number3;
    }
    cout << "Largest is " << largest << endl;

}