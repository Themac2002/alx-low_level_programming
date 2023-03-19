#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program will assign a random number to the variable n each time it is executed.
 * It then prints the last digit of n.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("Last digit of %d is %d and is ", n, abs(n) % 10);

        if (abs(n) % 10 > 5)
                printf("greater than 5\n");
        else if (abs(n) % 10 == 0)
                printf("0\n");
        else
                printf("less than 6 and not 0\n");

        return (0);
}

