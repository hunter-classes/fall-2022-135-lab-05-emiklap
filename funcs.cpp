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
 * Checks if a number us is is prime
 * @param n the number being checked
 * @return will return true if prime, will return false if not
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

/**
 * Finds the next prime number after the given integer
 * @param n the starting integer
 * @return returns the next prime number after n
 */
int nextPrime(int n) {
    bool checker = false;
    while (!checker) {
        n++;
        if (isPrime(n)) {
            checker = true;
        }
    }
    return n;
}

/**
 * Counts the number of prime numbers between (and including) an inputted range
 * @param a the lower range
 * @param b the upper range
 * @return the number of prime numbers between a and b
 */
int countPrimes(int a, int b) {
    int counter = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            counter++;
        }
    }
    return counter;
}

/**
 * Will check if a number is a twin prime
 * @param n the number being checked
 * @return will return true if n is a twin prime, will return false otherwise
 */
bool isTwinPrime(int n) {
    bool checker = false;
    if (isPrime(n)) {
        if (isPrime(n-2)) {
            checker = true;
        } else if (isPrime(n+2)) {
            checker = true;
        }
    }
    return checker;
}

/**
 * Finds the next twin prime after a given number
 * @param n the starting number
 * @return the next twin prime after n
 */
int nextTwinPrime(int n) {
    bool continueLoop = true;
    while (continueLoop) {
        n++;
        if (isTwinPrime(n)) {
            continueLoop = false;
        }
    }
    return n;
}

