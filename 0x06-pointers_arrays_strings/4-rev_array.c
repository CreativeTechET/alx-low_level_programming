#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: array
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
