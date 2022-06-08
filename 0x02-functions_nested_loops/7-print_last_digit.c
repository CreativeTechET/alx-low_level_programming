#include "main.h"

/**
 * print_last_digit -  gets the last digits in the number
 *
 * @n: number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int lastD;
	if (n < 0)
	{
		lastD = -n;
		_putchar(lastD + '0')
	}
	else
	{
		lastD = n % 10;
		_putchar(lastD + '0');
	}
	return (lastD);
}
