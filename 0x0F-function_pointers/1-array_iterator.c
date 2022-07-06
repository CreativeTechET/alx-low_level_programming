#include "function_pointers.h"

/**
 * array_iterator - uses a  pointer to excute in on every element of array
 * @array: array to use
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0 ; i < size; i++)
		{
			action(array[i]);
		}
	}

}
