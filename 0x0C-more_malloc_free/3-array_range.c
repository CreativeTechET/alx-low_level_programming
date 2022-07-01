#include "main.h"
/**
 * array_range - function to create array of int
 * @min: minimun amount
 * @max: maximum amount of number
 * Return: pointer to the newly assigned space
 */

int *array_range(int min, int max)
{
	int i;
	int *n;

	if (min > max)
		return (NULL);
	n = malloc(max * sizeof(int));
	for (i = 0; min <= max; min++)
	{
		n[min] = i;
		i++;
	}
	return (n);
}
