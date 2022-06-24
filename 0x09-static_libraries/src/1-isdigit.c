#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function checks if @c is digit.
 *
 * @c: input to be checked.
 *
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
