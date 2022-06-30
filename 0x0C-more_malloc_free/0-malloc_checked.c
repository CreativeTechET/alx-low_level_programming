#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: size to allocate
 * Return: pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
	size_t *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
