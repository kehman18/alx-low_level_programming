#include "main.h"

/**
* swap_int - swaps the integers
* @a: the first integer
* @b: second integer
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
