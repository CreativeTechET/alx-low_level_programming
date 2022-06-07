#include "main.h"

/**
 * print_alphabet_x10 - prints the  alphabet
 *
 * Retuen: NULL
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alphabet = 'a';
		int j = 0;

		for (j = 0; j < 26; j++)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
