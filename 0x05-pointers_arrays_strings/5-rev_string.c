#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	static int i, len, temp;

	len = strlen(s);
	if (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
		rev_string(s);
	}
}
