#include "main.c"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the character to print out
 *
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

