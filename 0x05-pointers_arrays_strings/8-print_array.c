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
	
	if (i == n)
	{
		for (i = 0; i < n; i++)
		{
			printf("%i, ", a[i]);
		}
	}
	else
	{
		printf("%i",a[i]);
	}
}
