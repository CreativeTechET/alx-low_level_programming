#include <string.h>

/**
 * print_rev - reverse the string
 * @s: inputtd string
 */

void print_rev(char *s)
{
	char *tmp = 0;
	int len = strlen(s);
	int i = 0;

	while (len >= i)
	{
		tmp = s[i - 1];
		puts(tmp);
		i--;
	}
}
