#include "main.h"
#include <ctype.h>

int _islower(int c)
{
	/**
	 * _islower - checks if the charachter is lower or uppercase 
	 *
	 * Return: int 0 || 1
	 */
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
