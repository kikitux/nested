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
    cout << "\n";
    vector<long> v = {}; // v.size() == 0
    long input = 0;
    cout << "Insert a vector?:";
    while ((cin >> input) && input != 9999)
        v.push_back(input);

    if (v.size() != 0){
        cout << "vector content:";
        for (unsigned int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << "\n";
        cout << "vector sum (n + .. + n): " << SumVector(v) << "\n";
        cout << "vector square sum (n^2 + .. + n^2): " << SumSquareVector(v) << "\n";
        cout << "vector cube sum (n^3 + .. + n^3): " << SumCubeVector(v) << "\n";
    }
    else
        cout << "vector is empty, skipping this part.. \n";

    return 0;
}