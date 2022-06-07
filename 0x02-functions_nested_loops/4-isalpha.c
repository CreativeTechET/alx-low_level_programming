#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if the charachter inputed was a alphabet
 *
 * @c: charachter parameter
 *
 * Return: 1 if is alphabet 0 if not
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
