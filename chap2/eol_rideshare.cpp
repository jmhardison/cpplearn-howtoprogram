/*
create a program to calculate ride share savings. Should output:
cost per day of driving
- total miles driven per day
- cost per gallon of gasoline
- average miles per gallon
- parking fees per day
- tolls per day
*/

#include <iostream>

using namespace std;

int main(){
    int milesPerDay{0};
    double costPerGallon{0.0};
    int averageMPG{0};
    double parkingFeesPerDay{0.0};
    double tollsPerDay{0.0};
    int totalDaysDrivenPerMonth{0};

    cout << "What is the current cost per gallon of gas?: ";
    cin >> costPerGallon;

    cout << "What is the average MPG of your vehicle?: ";
    cin >> averageMPG;

    cout << "How much parking fees do you pay per day?: ";
    cin >> parkingFeesPerDay;

    cout << "How much in tolls do you pay per day?: ";
    cin >> tollsPerDay;

    cout << "How many miles per day do you drive?: ";
    cin >> milesPerDay;

    cout << "How many days per month do you drive?(1-30): ";
    cin >> totalDaysDrivenPerMonth;

    //calculate
    int totalMilesPerMonth = milesPerDay * totalDaysDrivenPerMonth;
    double totalCostPerMonthGas = (totalMilesPerMonth / averageMPG) * costPerGallon;
    double totalCostPerMonthParking = (totalDaysDrivenPerMonth * parkingFeesPerDay);
    double totalCostPerMonthTolls = (totalDaysDrivenPerMonth * tollsPerDay);

    cout << "----------------------------------------------------------" << endl;
    cout << "Based on your information, you could save the following with rideshare: " << endl;
    cout << "Saved Miles Per Month: " << totalMilesPerMonth << endl;
    cout << "Saved Gas Per Month: " << totalCostPerMonthGas << endl;
    cout << "Saved Tolls Per Month: " << totalCostPerMonthTolls << endl;
    cout << "Saved Parking Per Month: " << totalCostPerMonthParking << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Total Saved Per Month: " << (totalCostPerMonthGas + totalCostPerMonthParking + totalCostPerMonthTolls) << endl;
}