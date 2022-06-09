#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int a;
	int n = 1;

	for (a = 0; a < 10; a++)
	{
		int i;

		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}

		if (i < 10) {
			n++;
		       _putchar(n + '0');
		}
		_putchar('\n');
	}
}

