//
// Created by alvarom on 19/08/2015.
//

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "../main.hpp"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "Square are computed", "[square]" ) {
    REQUIRE( Square(0) == 0 );
    REQUIRE( Square(1) == 1 );
    REQUIRE( Square(2) == 4 );
    REQUIRE( Square(3) == 9 );
    REQUIRE( Square(4) == 16 );
    REQUIRE( Square(10) == 100 );
    REQUIRE( Square(20) == 400 );

}
