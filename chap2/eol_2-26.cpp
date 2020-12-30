/*
create pattern output with 8 statements, production alternating * output 8 times and leading space.
* * * * * * * *
 * * * * * * * *
* * * * * * * *

*/

#include <iostream>

using namespace std;

int main(){

    //using 8 output statements
    cout << "8 lines" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;

    cout << endl << endl;
    //few 'lines'
    cout << "Few lines" << endl;
    cout << "* * * * * * * *" << endl << " * * * * * * * *" << endl << "* * * * * * * *" << endl << " * * * * * * * *" << endl << "* * * * * * * *" << endl << " * * * * * * * *" << endl << "* * * * * * * *" << endl << " * * * * * * * *" << endl;
    
    cout << endl << endl;

    //using alternative method
    cout << "Alt method" << endl;
    int countmax{8};
    for (int i = 1; i <= countmax; i++)
    {
        if(i % 2 == 0){
            cout << " * * * * * * * *" << endl;
        }
        else{
            cout << "* * * * * * * *" << endl;
        }
    }
    
    
}