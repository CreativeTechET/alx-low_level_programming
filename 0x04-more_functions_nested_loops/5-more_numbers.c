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
		int q = 1;

		for (i = 0; i <= 15; i++)
		{
			_putchar(i % 10 + '0');
		}

		if (i < 10) {
			n++;
		       _putchar(n + '0');
		}
		_putchar('\n');
	}
}

