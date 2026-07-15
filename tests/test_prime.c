#include "../include/prime.h"

#include <assert.h>
#include <stdio.h>


static void test_prime_detection(void)
{
    assert(is_prime(2));
    assert(is_prime(3));
    assert(is_prime(97));


    assert(!is_prime(1));
    assert(!is_prime(0));
    assert(!is_prime(100));
}



static void test_prime_counter(void)
{
    /*
        Prime numbers:
        1 - 10 = 4
        (2,3,5,7)
    */

    assert(count_primes(1,10) == 4);


    /*
        10 - 20:
        11,13,17,19
    */

    assert(count_primes(10,20) == 4);
}



int main(void)
{
    test_prime_detection();
    test_prime_counter();


    printf("All tests passed.\n");


    return 0;
}
