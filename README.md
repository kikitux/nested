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
