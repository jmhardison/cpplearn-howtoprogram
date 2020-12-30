/*
take a single character from keybaord, store it, and print it out as integer.
*/

#include <iostream>

using namespace std;

int main(){
    char inputChar{'a'};

    cout << "Type a single character to see it's integer representation: ";
    cin >> inputChar;

    cout << inputChar << " is represented by integer: " << static_cast<int>(inputChar) << endl;

}