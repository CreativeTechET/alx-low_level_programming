#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints out half of the word id the length of the word is odd
 * @str: the string
 */

void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2)
	{
		int i = 0;
		int n = len / 2;

		while (i < n)
		{
			printf("%c", str[i]);
		}
	}
}
