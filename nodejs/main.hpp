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

// we use this on the test, to calculate constexpr of fibonumbers, so we can be sure the new optimized  intfibonacci()
// has no errors

template<size_t N>
struct fibonacci : std::integral_constant<size_t, fibonacci<N-1>{} + fibonacci<N-2>{}> {};
template<> struct fibonacci<1> : std::integral_constant<size_t,1> {};
template<> struct fibonacci<0> : std::integral_constant<size_t,0> {};

unsigned long intfibonacci(unsigned long n) {
    static std::vector<unsigned long> values = {0,1};
    if (n < values.size() ) {
        return values[n];
    }
    for (unsigned long loop = values.size(); loop-1 < n ; ++loop){
        values.push_back(values[loop-2] + values[loop-1]);
    }
    return values[n];
}


