#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A: isDivisibleBy()") {
    CHECK(isDivisibleBy(12, 4) == true);
    CHECK(isDivisibleBy(12, 5) == false);

}

TEST_CASE("Task B: isPrime()") {
    CHECK(isPrime(2) == true);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(164) == false);
    CHECK(isPrime(17) == true);
}

TEST_CASE("Task C: nextPrime()") {
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(809) == 811);
    CHECK(nextPrime(809) != 810);
}

TEST_CASE("Task D: countPrimes()") {
    CHECK(countPrimes(5, 20) == 6);
    CHECK(countPrimes(175, 282) == 20);
}
