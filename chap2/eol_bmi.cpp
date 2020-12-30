/*
end of lesson - bmi calculator
*/

#include <iostream>

using namespace std;

int main(){
    int weightPounds{0};
    int heightInches{0};
    int bmi{0};

    cout << "What is your weight in pounds: ";
    cin >> weightPounds;

    cout << "What is your height in inches: ";
    cin >> heightInches;

    //calc bmi
    bmi = (weightPounds * 703) / (heightInches * heightInches);

    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl <<
            "Normal:      between 18.5 and 24.9" << endl <<
            "Overweight:  between 25 and 29.9" << endl <<
            "Obese:       30 or greater" << endl << endl;
    
    if(bmi < 18.5){
        cout << "Your BMI is: " << "Underweight(" << bmi << ")" << endl;
    }
    if(bmi >= 18.5 && bmi <= 24.9){
        cout << "Your BMI is: " << "Normal(" << bmi << ")" << endl;
    }
    if(bmi >= 25 && bmi <= 29.9){
        cout << "Your BMI is: " << "Overweight(" << bmi << ")" << endl;
    }
    if(bmi >= 30){
        cout << "Your BMI is: " << "Obese(" << bmi << ")" << endl;
    }
}