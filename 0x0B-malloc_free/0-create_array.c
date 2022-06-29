#include "main.h"

/**
 * create_array - function to create array of char
 * @size: size of the memory to allocate
 * @c: char to initialize the array with
 * Return: NULL if empty or failed otherwise return the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *arr;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
