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
	char *temp = strcat(dest, src);
	return (temp);
}
