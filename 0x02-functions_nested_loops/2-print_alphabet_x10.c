#include "main.h"

void print_alphabet_x10(void)
{
	/**
	* print_alphabet - prints all the alphabets
	*
	* Return: a character value
	*/

	char alphabet = 'a';
	int i;
	for (i = 0; i < 10; i++) {
		int j;
		for (j = 0; j < 26; j++) {
			_putchar(alphabet);
		}
		_putchar('\n');
		alphabet++;
		}
}
