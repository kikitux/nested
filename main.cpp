#include <iostream>
#include "nodejs/main.hpp"
#include <chrono>

using namespace std;
using namespace std::chrono;


int main() {
    cout << "\n";
    unsigned int number = 0;
    cout << "Insert a number to calculate funtions ?:";
    cin >> number ;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    cout << "Fibonacci number of " << number << " is " << intfibonacci(number) << "\n";
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    cout << "Dijkstra Fibonacci number of " << number << " is " << intfibdijkstra(number) << "\n";
    high_resolution_clock::time_point t3 = high_resolution_clock::now();
    cout << "Fast_fib Fibonacci number of " << number << " is " << fast_fib(number) << "\n";
    high_resolution_clock::time_point t4 = high_resolution_clock::now();
    cout << "\n";
    auto durationf = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    auto durationd = std::chrono::duration_cast<std::chrono::microseconds>( t3 - t2 ).count();
    auto durationfb = std::chrono::duration_cast<std::chrono::microseconds>( t4 - t3 ).count();
    cout << "\n";
    cout << "duration fibonacci " << durationf << "\n";
    cout << "duration dijkstra " << durationd << "\n";
    cout << "duration fast_fib " << durationfb << "\n";
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
