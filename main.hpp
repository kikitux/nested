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

template<size_t N>
struct fibonacci : std::integral_constant<size_t, fibonacci<N-1>{} + fibonacci<N-2>{}> {};
template<> struct fibonacci<1> : std::integral_constant<size_t,1> {};
template<> struct fibonacci<0> : std::integral_constant<size_t,0> {};

int intfibonacci(int N) {
    if ( N == 0 ) return 0;
    else if ( N == 1 ) return 1;
    else
        return (intfibonacci(N-1) + intfibonacci(N-2));
}