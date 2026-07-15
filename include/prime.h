#ifndef PRIME_H
#define PRIME_H

#include <stdbool.h>

/**
 * @brief Checks whether a number is prime.
 *
 * @param number Integer value to test.
 *
 * @return true if prime, false otherwise.
 */
bool is_prime(int number);


/**
 * @brief Counts prime numbers inside an inclusive range.
 *
 * @param start Lower boundary.
 * @param end Upper boundary.
 *
 * @return Number of primes found.
 */
int count_primes(int start, int end);

#endif
