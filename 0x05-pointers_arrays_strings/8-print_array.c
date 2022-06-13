#include <stdio.h>
#include <string.h>

/**
 * print_array - prints out the arrays n number
 * @a: number  1
 * @n: number 2
 */

void print_array(int *a, int n)
{
	int len = strlen(a);
	int i;
	for (i = 0; i <= len; i++)
	{
		if (i = len)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
