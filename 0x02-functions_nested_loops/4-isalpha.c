#include "main.h"

/**
* _isalpha - the fuction checks for alphabets
* @c: the arguement to be chekcked
* Return: 1 if it is an alphabet and 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
