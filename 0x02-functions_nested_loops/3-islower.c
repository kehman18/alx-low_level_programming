#include "main.h"

/**
* _islower - function to prints a lower case letter
* @c: the arguement to beprinted
* Return: 1 only if it is a lowercasee but 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
