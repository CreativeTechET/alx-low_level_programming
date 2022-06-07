#include "main.h"

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 0;
	while (i < 10)
	{
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

int main(void)
{
	print_alphabet_x10();
	return (0);
}
