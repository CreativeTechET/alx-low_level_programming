#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (n != 'Q' || n != 'E')
		{
			putchar(tolower(n));
		}
	}
	putchar('\n');
	return (0);
