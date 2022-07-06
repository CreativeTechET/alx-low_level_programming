#include "function_pointers.h"

/**
 * int_index - function takes function pointer and searches an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to a function
 * Return:  0 success -1 error index of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int index, i;

		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				index = i;
			}
			else
			{
				return (-1);
			}
		}
	}
	return (index);
}
