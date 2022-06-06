#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: success(0)
 */

int main(void)
{
	char a;
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
