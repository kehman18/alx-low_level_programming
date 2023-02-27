#include "main.h"

/**
* _strlen - returns the length of a string
* @s: the string to be counted
* Return: always 0
*/

int _strlen(char *s)
{
	int len_str = 0;

	while (*s != '\0')
	{
		len_str++;
		s++;
	}

	return (len_str);
}
