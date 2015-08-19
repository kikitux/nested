//
// Created by alvarom on 19/08/2015.
//

#ifndef NESTED_MAIN_HPP
#define NESTED_MAIN_HPP

#endif //NESTED_MAIN_HPP

unsigned int Factorial(unsigned int number) {
  return number > 1 ? Factorial(number-1) *number : 1;
}