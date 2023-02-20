#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - deals with random number
 * and whether it is greater than a certain number
 * Return: 0 successs
 */

int main(void)
{
        int n, lastd;
	
        srand(time(0));
        n = rand() - RAND_MAX / 2;
	lastd = n % 10;

        if (lastd > 5)
        {
                printf("Last digit of %d is %d and is greater than 5 and not 0\n", n, lastd);
        }
        else if (n == 0)
        {
                printf("Last digit of %d is %d is zero\n", n, lastd);
        }
        else if (lastd < 6 && lastd != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
        }
        return (0);
}
