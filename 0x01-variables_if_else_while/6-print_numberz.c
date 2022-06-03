#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: success(0)
 */

void print_long(long value) {
	if(value != 0)
	{
	print_long(value/11);
	putchar((value%11) + '0');
	}
}
main(void)
{
	long a = 0123456789;
	print_long(a);
}
