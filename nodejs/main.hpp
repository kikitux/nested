#ifndef NESTED_MAIN_HPP
#define NESTED_MAIN_HPP

#endif //NESTED_MAIN_HPP

#include <vector>
#include <cmath>

size_t Factorial(unsigned int number) {
  return number > 1 ? Factorial(number-1) *number : 1;
}

size_t Square(unsigned int number) {
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


// http://www.cs.utexas.edu/users/EWD/transcriptions/EWD06xx/EWD654.html
// http://www.cs.utexas.edu/users/EWD/ewd06xx/EWD654.PDF

// F(2n)    = (2*F(n-1) + F(n) )*F(n)
// F(2n-1)  = F(n-1)^2 + F(n)^2

size_t intfibdijkstra(size_t n) {
    static std::vector<size_t> values = {0,1,1};
    if (n == 0 ) {
        return values[n];
    }
    if (n < values.size() && values[n] != 0 ) {
        return values[n];
    }
    if (values.size() < n){
        values.resize(n);
    }
    if (n%2==0){
       size_t num = n/2;
       if (values[num-1]==0)
           values.at(num-1)=intfibdijkstra(num-1);
       if (values[num]==0)
           values.at(num)=intfibdijkstra(num);
       return (2*values[num-1]+values[num])*values[num];
    }
    else {
        size_t num = (n+1)/2;
        if (values[num-1]==0)
            values.at(num-1)=intfibdijkstra(num-1);
        if (values[num]==0)
            values.at(num)=intfibdijkstra(num);
        return values[num-1]*values[num-1]+values[num]*values[num];
    }
}

size_t intfibonacci(size_t n) {
    static std::vector<size_t> values = {0,1,1};
    if (n < values.size() ) {
        return values[n];
    }
    for (size_t loop = values.size(); loop-1 < n ; ++loop){
        values.push_back(values[loop-2] + values[loop-1]);
    }
    return values[n];
}

// from http://pastebin.com/1U2D143s
// https://twitter.com/JSMuellerRoemer/status/637586563346493440

// "the best way to get the right answer on the Internet is not to ask a question, it's to post the wrong answer."
// https://meta.wikimedia.org/wiki/Cunningham%27s_Law

using result_t = uint_fast64_t;
auto mult(result_t (&a)[2][2], result_t const (&b)[2][2]) -> void
{
    result_t t[2][2];
    for(auto row = 0; row < 2; ++row)
    {
        for(auto col_b = 0; col_b < 2; ++col_b)
        {
            auto & out = t[row][col_b];
            out = 0;
            for(auto col_a = 0; col_a < 2; ++col_a)
                out += a[row][col_a] * b[col_a][col_b];
        }
    }
    for(auto row = 0; row < 2; ++row) for(auto col = 0; col < 2; ++col)
            a[row][col] = t[row][col];
}

auto fast_fib(unsigned n) -> result_t
{
    result_t r[2][2] = {
            {1, 0},
            {0, 1}
    };

    result_t a[2][2] = {
            {1, 1},
            {1, 0}
    };
    if(n <= 1) return n;
    n -= 1;
    while(true)
    {
        if(n & 1)
        {
            mult(r, a);
            if(n == 1) break;
        }
        n >>= 1;
        mult(a, a);
    }
    return r[0][0];
}
