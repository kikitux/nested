#include <iostream>

#include "main.hpp"

using namespace std;

int main() {
    unsigned int number = 0;
    cout << "Insert a number to calculate Factorial?:";
    cin >> number ;
    cout << "Factorial of " << number << " is " << Factorial(number) << "\n" ;
    return 0;
}