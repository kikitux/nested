#include <iostream>

#include "main.hpp"

using namespace std;

int main() {
    unsigned int number = 0;
    cout << "Insert a number to calculate funtions ?:";
    cin >> number ;
    cout << "Factorial of " << number << " is " << Factorial(number) << "\n" ;
    cout << "Square of " << number << " is " << Square(number) << "\n" ;
    cout << "Cube of " << number << " is " << Cube(number) << "\n" ;
    return 0;
}