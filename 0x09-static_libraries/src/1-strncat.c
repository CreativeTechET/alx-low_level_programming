#include "main.h"

/**
 * _strncat - function for concatinating strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: full string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = strncat(dest, src, n);

	return (tmp);
}
