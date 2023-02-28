#include "main.h"
#include <stdio.h>

/**
* print_array - prints an array in the way it was stored
* @a: stores the elements in the array
* @n: is the number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");

}
