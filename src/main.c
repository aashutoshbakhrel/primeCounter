#include "../include/prime.h"

#include <stdio.h>


#define PROGRAM_NAME "Prime Counter"



static void print_banner(void)
{
    printf("\n");
    printf("=============================\n");
    printf("      %s\n", PROGRAM_NAME);
    printf("=============================\n");
}



static int read_integer(const char *message)
{
    int value;


    printf("%s", message);
    scanf("%d", &value);


    return value;
}



int main(void)
{
    print_banner();


    int start =
        read_integer("Enter starting number: ");


    int end =
        read_integer("Enter ending number: ");



    int result =
        count_primes(start, end);



    printf("\nPrime numbers between %d and %d: %d\n",
           start,
           end,
           result);



    return 0;
}
