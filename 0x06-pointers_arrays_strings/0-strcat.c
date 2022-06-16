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
	int  i, j,len;
	
	len = strlen(src);
	j = 0;
	for (; j < len; j++)
	{
		char tmp = src[j];
		if (tmp == '\0')
		{
			i = 0;
			while (dest[i] != '\0')
			{
				src[j] = dest[i];
			}
		}
	}
	return (dest);
}
