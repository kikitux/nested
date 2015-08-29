//
// Created by alvarom on 19/08/2015.
//

#define CATCH_CONFIG_MAIN
#include <iostream>
#include <vector>
#include "catch.hpp"
#include "../nodejs/main.hpp"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
    REQUIRE( Factorial(11) == Factorial(10)*11 );
    REQUIRE( Factorial(11) == 3628800*11 );
    REQUIRE( Factorial(12) == 3628800*11*12 );
}

TEST_CASE( "Square are computed", "[square]" ) {
    REQUIRE( Square(-2) == 4 );
    REQUIRE( Square(-2) == Square(2));
    REQUIRE( Square(-1) == 1 );
    REQUIRE( Square(-1) == Square(1));
    REQUIRE( Square(0) == 0 );
    REQUIRE( Square(1) == 1 );
    REQUIRE( Square(2) == 4 );
    REQUIRE( Square(3) == 9 );
    REQUIRE( Square(4) == 16 );
    REQUIRE( Square(10) == 100 );
    REQUIRE( Square(20) == 400 );
}

TEST_CASE( "Cubes are computed", "[cube]" ) {
    REQUIRE( Cube(-3) == -27 );
    REQUIRE( Cube(-3) == - Cube(3));
    REQUIRE( Cube(-2) == -8 );
    REQUIRE( Cube(-2) == - Cube(2));
    REQUIRE( Cube(-1) == -1 );
    REQUIRE( Cube(-1) == - Cube(1));
    REQUIRE( Cube(0) == 0 );
    REQUIRE( Cube(1) == 1 );
    REQUIRE( Cube(2) == 8 );
    REQUIRE( Cube(3) == 27 );
    REQUIRE( Cube(10) == 1000 );
    REQUIRE( Cube(100) == 1000000 );
}

TEST_CASE( "Vector fun", "[vector]" ) {

    std::vector<long> v0 = {0};
    v0.push_back(0);
    v0.push_back(0);
    REQUIRE( v0.size() == 3 );
    REQUIRE(SumVector(v0) == 3*0 );
    REQUIRE(SumSquareVector(v0) == 3*0*0 );
    REQUIRE(SumCubeVector(v0) == 3*0*0*0 );

    std::vector<long> v1 = {1};
    v1.push_back(1);
    v1.push_back(1);
    REQUIRE( v1.size() == 3 );
    REQUIRE(SumVector(v1) == 3*1 );
    REQUIRE(SumSquareVector(v1) == 3*1*1 );
    REQUIRE(SumCubeVector(v1) == 3*1*1*1 );

    std::vector<long> v2 = {2};
    v2.push_back(2);
    v2.push_back(2);
    REQUIRE( v2.size() == 3 );
    REQUIRE(SumVector(v2) == 3*2 );
    REQUIRE(SumSquareVector(v2) == 3*2*2 );
    REQUIRE(SumCubeVector(v2) == 3*2*2*2 );

    std::vector<long> v3 = {3};
    v3.push_back(3);
    v3.push_back(3);
    REQUIRE( v3.size() == 3 );
    REQUIRE(SumVector(v3) == 3*3 );
    REQUIRE(SumSquareVector(v3) == 3*3*3 );
    REQUIRE(SumCubeVector(v3) == 3*3*3*3 );

}

TEST_CASE( "Fibonnaci fun", "[fibonnaci]" ) {

    constexpr long fibo10 = fibonacci<10>();
    constexpr long fibo20 = fibonacci<20>();
    constexpr long fibo30 = fibonacci<30>();
    constexpr long fibo40 = fibonacci<40>();
    constexpr long fibo50 = fibonacci<50>();
    constexpr long fibo60 = fibonacci<60>();

    REQUIRE(intfibonacci(10)==fibo10);
    REQUIRE(intfibonacci(20)==fibo20);
    REQUIRE(intfibonacci(30)==fibo30);

    REQUIRE(fibo40==102334155);
    REQUIRE(fibo50==12586269025);
    REQUIRE(fibo60==1548008755920);

}
