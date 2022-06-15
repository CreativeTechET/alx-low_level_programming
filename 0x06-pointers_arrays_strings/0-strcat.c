#include "main.h"

/**
 * _strcat -  concatinates the string each other
 * Returns: a char with the final string
 */

char final[100];

char *_strcat(char *dest, char *src)
{
	int  i,j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		final[i] = dest[i];
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		final[i] = src[j];
	}

	return (final);
}
