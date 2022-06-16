#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: array
 * @n: length of the array
 **/

void reverse_array(int *a, int n)
{
	int i = n;

	while (i <= n && i >= 0)
	{
		i--;
		if (i == 0)
		{
			printf("%d", a[i]);
			break;
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
