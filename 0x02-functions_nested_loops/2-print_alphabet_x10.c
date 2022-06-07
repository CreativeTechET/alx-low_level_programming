#include "main.h"

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i;
	for (i = 0; i < 26; i++) {
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

void printer(void)
{
	int i = 0;
	while (i < 10)
	{
		print_alphabet_10_times();
		i++;
	}
}
