#include "main.h"

/**
* _puts - it prints a string
* @str: contains the string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
