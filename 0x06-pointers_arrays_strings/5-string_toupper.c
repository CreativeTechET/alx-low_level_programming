#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - function to convert string to uppercase
 * @s: string
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		s[i] = (char)toupper(s[i]);
	}
	return (s);
}
