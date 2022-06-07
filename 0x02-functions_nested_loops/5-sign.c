#include "main.h"
#include <ctype.h>

/**
 * print_sign - prints out + if n's sign is posotive and else prnits out -
 *
 * @n: number to be checked for sign
 *
 * Return: + or -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
