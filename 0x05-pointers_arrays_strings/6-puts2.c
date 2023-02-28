#include "main.h"

/**
* puts2 - this prints out the strings that are on the even string
*
*@str: this contains the integer in form of string
*/

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		_putchar(str[i]);

		else
			continue;
	}
	_putchar('\n');

}
