#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Testing Lab 5 task! If the return value is 1 it means true, if it is 0 it means false. \n";

  std::cout << "\n Task A: \n" << "isDivisibleBy(12, 4) = " << isDivisibleBy(12, 4) << std::endl;
  std::cout << "isDivisibleBy(12, 5) = " << isDivisibleBy(12, 5) << std::endl;


  std::cout << "\n Task B: \n" << "isPrime(17) = " << isPrime(17) << std::endl;
  std::cout << "isPrime(12) = " << isPrime(12) << std::endl;

  std::cout << "\n Task C: \n" << "nextPrime(14) = " << nextPrime(14) << std::endl;
  std::cout << "nextPrime(17) = " << nextPrime(17) << std::endl;

  std::cout << "\n Task D: \n" << "countPrimes(5, 20) = " << countPrimes(5, 20) << std::endl;
  std::cout << "countPrimes(175, 282) = " << countPrimes(175, 282) << std::endl;
  return 0;
}
