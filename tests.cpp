#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A: isDivisibleBy()") {
    CHECK(isDivisibleBy(12, 4) == true);
    CHECK(isDivisibleBy(12, 5) == false);

}
