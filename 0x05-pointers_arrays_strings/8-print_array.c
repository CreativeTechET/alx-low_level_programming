#include <stdio.h>
#include <string.h>

/**
 * print_array - prints out the arrays n number
 * @a: number  1
 * @n: number 2
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i <= (n - 1); i++)
	{
		if (i == (n - 1))
		{
			printf("%i",a[i]);
		}
		else
		{

			printf("%i, ",a[i]);
		}
	}
		printf("\n");
}
