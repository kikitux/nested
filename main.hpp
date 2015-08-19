#ifndef NESTED_MAIN_HPP
#define NESTED_MAIN_HPP

#endif //NESTED_MAIN_HPP

unsigned int Factorial(unsigned int number) {
  return number > 1 ? Factorial(number-1) *number : 1;
}

unsigned int Square(unsigned int number) {
  return number*number;
}

unsigned int Cube(unsigned int number) {
    return number*number*number;
}
