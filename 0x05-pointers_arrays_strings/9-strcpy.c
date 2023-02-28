#include "main.h"

/**
* _strcpy - it copies a string with the first value
*
* @dest: pointer referring to a string
*
* @src: pointer referring to a string
*
* Return: always dest
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
