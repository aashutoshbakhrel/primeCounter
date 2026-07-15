#include "../include/prime.h"

#include <math.h>


bool is_prime(int number)
{
    if (number <= 1)
    {
        return false;
    }


    if (number == 2)
    {
        return true;
    }


    if (number % 2 == 0)
    {
        return false;
    }


    for (int divisor = 3;
         divisor <= sqrt(number);
         divisor += 2)
    {
        if (number % divisor == 0)
        {
            return false;
        }
    }


    return true;
}



int count_primes(int start, int end)
{
    int count = 0;


    if (start > end)
    {
        int temp = start;
        start = end;
        end = temp;
    }


    for (int number = start;
         number <= end;
         number++)
    {
        if (is_prime(number))
        {
            count++;
        }
    }


    return count;
}
