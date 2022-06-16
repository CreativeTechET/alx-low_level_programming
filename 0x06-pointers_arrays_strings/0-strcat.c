#include "main.h"
#include <string.h>

/**
 * _strcat -  concatinates the string each other
 * @dest: destination
 * @src: source
 * Return: a char with the final string
 */

char *_strcat(char *dest, char *src)
{
	int  i, j, len;

	len = strlen(dest);
	j = 0;
	for (; j < len; j++)
	{
		char tmp = dest[j];

		if (tmp == '\0')
		{
			i = 0;
			while (src[i] != '\0')
			{
				dest[j] = src[i];
			}
		}
	}
	return (dest);
}
