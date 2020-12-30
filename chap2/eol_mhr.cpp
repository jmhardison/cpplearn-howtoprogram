/*
calculate a persons MHR
220-age=maximum heart rate
*/

#include <iostream>

using namespace std;

int main(){
    int age{0};

    cout << "What is your age?: ";
    cin >> age;

    cout << "Your Maximum Heart Rate (MHR) is: " << (220 - age) << endl;
    cout << "Your Tanaka MHR is: " << (208 - (0.7 * age)) << endl;
    cout << "Your Gellish MHR is: " << (207 - (0.7 * age)) << endl;
    cout << "Your Nesh MHR is: " << (211 - (0.64 * age)) << endl;
}