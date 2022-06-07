#include "main.h"

/**
 * _isalpha - checks if the charachter inputed was a alphabet
 *
 * @c: charachter parameter
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
