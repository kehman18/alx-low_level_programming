#include <unistd.h>

/**
* _putchar - this function writes a single character
* @c: char to be printed
*Return: On success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
