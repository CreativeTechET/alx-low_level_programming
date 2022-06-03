#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	for (int n = 'A'; n <= 'Z'; n++)
	{
		putchar(tolower(n));
		putchar('\n');
	}
	return (0);
}
