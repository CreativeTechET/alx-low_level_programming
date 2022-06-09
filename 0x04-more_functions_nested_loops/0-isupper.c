#include "main.h"
#include <ctype.h>

/**
 * _isupper - converts a chatr into uppercase char
 * @c: the number to be checked
 * Return: the converted char
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

