#include "main.h"
#include <ctype.h>

/**
* _islower - returns 1 if 'c' is lowercase and return 0 if 'c' is uppercase
*
* @c: parameter for character
*
* Return: Always 0.
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
