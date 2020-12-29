#include <iostream>

int main(){

    int number1{0};
    int number2{0};
    int sum{0};

    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;

    sum = number1 + number2;

    std::cout << "The sum is: " << sum << std::endl;

}