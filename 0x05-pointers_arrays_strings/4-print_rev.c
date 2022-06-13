#include <string.h>

/**
 * print_rev - reverse the string
 * @s: inputtd string
 */

void print_rev(char *s)
{
	int len = strlen(s);
	len -= 1;
	int i = 0;

	for (; i <= len; len--)
	{
		puts(*s[len]);
	}
}
