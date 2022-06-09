#include "main.h"
#include <ctype.h>

/**
 * print_numbers - function to print from 1 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
