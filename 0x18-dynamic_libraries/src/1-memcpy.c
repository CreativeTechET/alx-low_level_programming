#include "main.h"

/**
 * _memcpy - copies a byte on memory
 * @dest: destination
 * @src: source
 * @n: number of the src
 * Return: destinstion
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
