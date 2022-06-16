#include <ctype.h>
#include <string.h>

/**
 * cap_string - function to convert string to uppercase
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	char *p = s;

	while (*p)
	{
		*p = toupper(*p);
		p++;
	}
	return (p);
}
