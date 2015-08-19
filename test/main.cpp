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
