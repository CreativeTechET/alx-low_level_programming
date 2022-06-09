#include "main.h"

/**
 * print_line - print a blank line
 * @n: parameter for how many lines
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int c = n - 1;

		for (i = 0; i <= c; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
