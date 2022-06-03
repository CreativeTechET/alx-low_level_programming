#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(tolower(n));
	}
}
