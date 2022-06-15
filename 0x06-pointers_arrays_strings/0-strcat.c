#include "main.h"

/**
 * _strcat -  concatinates the string each other
 * Returns: a char with the final string
 */

char final[100];

char *_strcat(char *dest, char *src)
{
	int  i,j;

	for (i = 0; src[i] != '\0'; i++)
	{
		final[i] = src[i];
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		final[i] = dest[j];
	}
	return (final);
}
