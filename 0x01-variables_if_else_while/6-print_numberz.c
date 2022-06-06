#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: success(0)
 */

int main(void)
{
	int i = 0;

	for (i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
