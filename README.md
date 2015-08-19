### nested

This is a C++ sample project that use CMAKE and includes catch.h test

![https://travis-ci.org/kikitux/nested.svg](https://travis-ci.org/kikitux/nested.svg)

```text
.
|-- .travis.yml		// travis-ci conf file
|-- CMakeLists.txt
|-- main.cpp		// main c++ code
|-- main.hpp		// main header. Functions are here
`-- test
    |-- catch.hpp	// catch header file
    `-- main.cpp	// test are here. Include main.cpp
```

### How this works?

CMake generate 2 binaries. code and codet. codet is the one that includes the tests, and executed on development or CI/CD (ie Travis-ci)

### main.hpp

Project header define functions, ie:

```cpp
unsigned long Square(unsigned int number) {
  return number*number;
}

long Cube(int number) {
    return number*number*number;
}
```

### test

using catch, we define tests:

```cpp
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
}
```

Alvaro
