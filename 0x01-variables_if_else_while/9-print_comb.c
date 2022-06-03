#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always true
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
		if (n == 9)
		{}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
