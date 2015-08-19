#ifndef NESTED_MAIN_HPP
#define NESTED_MAIN_HPP

#endif //NESTED_MAIN_HPP

#include <math.h>
#include <vector>

unsigned long Factorial(unsigned int number) {
  return number > 1 ? Factorial(number-1) *number : 1;
}

unsigned long Square(unsigned int number) {
  return number*number;
}

long Cube(int number) {
    return number*number*number;
}

long SumVector(std::vector<long> vect){
    long sum_of_elems = 0;
    for (long n : vect)
        sum_of_elems += n;
    return sum_of_elems;
}

long SumSquareVector(std::vector<long> vect){
    long sum_of_elems = 0;
    for (long n : vect)
        sum_of_elems += n*n;
    return sum_of_elems;
}

long SumCubeVector(std::vector<long> vect){
    long sum_of_elems = 0;
    for (long n : vect)
        sum_of_elems += n*n*n;
    return sum_of_elems;
}