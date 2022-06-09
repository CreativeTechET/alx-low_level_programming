#include "main.h"
#include <ctype.h>

/**
 * _isupper - converts a chatr into uppercase char
 *
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
