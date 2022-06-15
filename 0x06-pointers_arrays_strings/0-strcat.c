#include <stdio.h>
#include <string.h>


/**
 * _strcat -  concatinates the string each other
 * Returns: a char with the final string
 */


char *_strcat(char *dest, char *src)
{
	int  i,j;
	char final;

	for (i = 0; dest[i] != '\0',i++)
	{
		_putchar(dest[i]);
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		_putchar(src[j]);
	}

}
