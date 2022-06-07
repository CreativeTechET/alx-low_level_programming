#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - prints all the alphabets
 *
 * Return: Always (0).
 */

char print_alphabet(void);

char print_alphabet(void)
{
	/**
	* print_alphabet - prints all the alphabets
	*
	* Return: a character value
	*/
	int i = 97;

	for (; i < 123; i++)
	{
		putchar(i);
	}
	return (i);
}

int main(void)
{
	print_alphabet();
	printf("\n");
	return (0);
}
