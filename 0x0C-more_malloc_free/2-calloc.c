#include "main.h"

/**
 * _calloc - function allocates memory and initialize it to 0
 * @nmemb: to store in the newly allocated space
 * @size: size
 * Return: return tpointer to the newly allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
