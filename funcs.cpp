#include <iostream>
#include "funcs.h"


/**
 * Checks divisibility of inputed integer
 * @param n the number we are checking divisibility for
 * @param d the number we are dividing the interger by
 * @return will return true if n is divisible by d
 */
bool isDivisibleBy(int n, int d) {
    if (n % d == 0) {
        return true;
    } else {
        return false;
    }
}

/**
 *
 */
bool isPrime(int n) {
    if (n > 1) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;

    } else {
        return false;
    }
}

