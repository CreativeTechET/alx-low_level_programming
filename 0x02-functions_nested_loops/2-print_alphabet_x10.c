#include "main.h"

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	for (int i = 0; i < 26; i++) {
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
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
