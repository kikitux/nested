### nested

This is a C++ sample project that use CMAKE and includes catch.hpp test

![https://travis-ci.org/kikitux/nested.svg](https://travis-ci.org/kikitux/nested.svg)

travis job for this project can be found at: [https://travis-ci.org/kikitux/nested](https://travis-ci.org/kikitux/nested)

### project structure

```text
.
|-- .travis.yml		// travis-ci conf file
|-- CMakeLists.txt
|-- main.cpp		// main c++ code
|-- main.hpp		// main header. Functions are here
`-- test
    |-- catch.hpp	// catch header file
    `-- main.cpp	// test are here. Include ../main.hpp and catch.hpp
```

### How this works?

We use CMake generate 2 binaries, `<code>` and `<codet>`.

`<codet>` is the one that includes the tests, and executed on development or CI/CD (ie Travis-ci)

CLion:

![CLion](https://www.dropbox.com/s/y8ulpejj4wuht77/Screenshot%202015-08-19%2020.52.36.png?dl=1)

Travis-ci:

![travis-ci](https://www.dropbox.com/s/hhc19wor3id9ii9/Screenshot%202015-08-19%2020.44.07.png?dl=1)



### main.hpp

Project header define functions, ie:

[main.hpp](main.hpp)
```cpp
unsigned long Square(unsigned int number) {
  return number*number;
}

long Cube(int number) {
    return number*number*number;
}
```

### test

using [catch](https://github.com/philsquared/Catch), we define tests:

[test/main.cpp](test/main.cpp)
```cpp
TEST_CASE( "Square are computed", "[square]" ) {
    REQUIRE( Square(1) == 1 );
    REQUIRE( Square(2) == 4 );
}

TEST_CASE( "Cubes are computed", "[cube]" ) {
    REQUIRE( Cube(2) == 8 );
    REQUIRE( Cube(3) == 27 );
}
```

### running test

```bash
cmake .
make
build/<codet>
```

sample output (osx):

```bash
$ cmake .
-- The C compiler identification is AppleClang 6.0.0.6000057
-- The CXX compiler identification is AppleClang 6.0.0.6000057
-- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc
-- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /Volumes/hd1/Dropbox/am/Git/kikitux/CLion/nested2

$ make
Scanning dependencies of target nested
[ 25%] Building CXX object CMakeFiles/nested.dir/main.cpp.o
[ 50%] Linking CXX executable build/nested
[ 50%] Built target nested
Scanning dependencies of target nestedt
[ 75%] Building CXX object CMakeFiles/nestedt.dir/test/main.cpp.o
[100%] Linking CXX executable build/nestedt
[100%] Built target nestedt

$ build/nestedt
===============================================================================
All tests passed (30 assertions in 3 test cases)

$
```

Alvaro
..
..
