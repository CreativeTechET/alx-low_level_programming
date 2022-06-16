#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: array
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int temp, i, no;

	i = 0;
	no = n - 1; 

	while (i < no)
	{
		temp = a[i];
		a[i] = a[no];
		a[no] = temp;
		i++;
		no--;
	}
}
