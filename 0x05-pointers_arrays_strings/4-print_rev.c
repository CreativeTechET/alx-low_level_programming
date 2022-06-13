#include <string.h>

/**
 * print_rev - reverse the string
 * @s: inputtd string
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i = 0;

	while (len >= i)
	{
		puts(s[i - 1]);
		i--;
	}
}
