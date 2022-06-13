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
		int n = len / 2;
		int i = n + 1;

		for (j = 0; j < len; j++)
			while (i > n)
			{

				if (i <= len)
				{
					break;
				}
				printf("%c", str[i]);
				i++;
			}
		}
	}
}
