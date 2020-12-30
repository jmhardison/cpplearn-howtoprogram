/*
for lenghts 1 to 5cm calculate the perimiter and area, and output with tabs and column formatting.
*/

#include <iostream>

using namespace std;

int main(){
    cout << "Side of\t\tPerimiter of\tArea of" << endl;
    cout << "square (cm)\tsquare (cm)\tsquare(cm^2)" << endl;

    
    for (int i = 1; i <= 5; i++)
    {
        cout << i << "\t\t";
        //perimeter of square = 4a
        cout << (4*i) << "\t\t";
        //area of square = a*a
        cout << (i*i) << endl;
            
    }
    
    

}