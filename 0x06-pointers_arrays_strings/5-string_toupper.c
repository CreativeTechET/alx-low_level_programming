#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - function to convert string to uppercase
 * @s: string
 * Return: string
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
		*p = toupper(*p);
		p++;
	}
	return (p);
}
