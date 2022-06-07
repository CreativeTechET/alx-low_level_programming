#include "main.h"

void print_alphabet_x10(void)
{
	/**
	* print_alphabet - prints all the alphabets
	*
	* Return: a character value
	*/

	int i = 97;

	for (; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

void printer(void)
{
	int a = 0;
	while (a < 10)
	{
		print_alphabet_x10();
	}
}
