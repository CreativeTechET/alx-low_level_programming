#include "main.h"

/**
 * _strncpy - function to copy strings
 * @dest: destination
 * @src: source
 * @n: numbers
 * Return: final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = strncpy(dest, src, n);
	
	return (tmp);
}
