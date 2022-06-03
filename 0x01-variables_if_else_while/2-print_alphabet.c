#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 'A';

	if (n <= 'Z')
	{
		putchar(n);
		putchar('\n');
		n++;
	}
	return (0);
}
