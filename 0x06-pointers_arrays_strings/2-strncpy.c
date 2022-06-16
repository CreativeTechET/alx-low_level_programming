#include "main.h"


/**
 * _strncpy - function to copy string
 * @dest: destination string
 * @n: length
 * @src: source string
 * Return: returns char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char tmp = strcpy(dest, src, n);

	return (tmp);
}

