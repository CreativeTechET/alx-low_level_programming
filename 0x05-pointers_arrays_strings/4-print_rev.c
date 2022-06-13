#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse the string
 * @s: inputtd string
 */

void print_rev(char *s)
{
	int len = (strlen(s) - 1);
	int i;

	for (i = 0; i <= len; len--)
	{
		puts(s[len]);
	}
}
