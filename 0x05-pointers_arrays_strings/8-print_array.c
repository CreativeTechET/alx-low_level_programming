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

	while (a[i] != '\0')
	{
		printf("%d, ", a[i]);
	}
}
