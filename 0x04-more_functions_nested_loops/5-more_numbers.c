#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

