#include "main.h"

/**
 * _memset -fills a memory with a constant value
 * @s: pointer to the array
 * @b: constant value
 * @n: number of blocks
 * Return: the new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

