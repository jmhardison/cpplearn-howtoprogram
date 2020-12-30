/*
write a program that reads in the radius of a circle as an integer and prints the circles diameter and area. Use the constant value 3.14159 for pi.
Do all calculations in output statements.
*/

#include <iostream>

using namespace std;

int main(){
    int nRadius{0};
    const float piValue = 3.14159;

    //collect
    cout << "Input the radius of a circle as integer: ";
    cin >> nRadius;

    //diameter = 2r
    cout << "The radius is: " << (2 * nRadius) << endl;
    
    //area = pi*(r*r)
    cout << "The area is: " << (piValue * (nRadius * nRadius)) << endl;
    
}