#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int len = (strlen(s) - 1);
	int i;

	for (i = 0; i <= 9; len--)
	{
		printf("%c", s[len]);
	}
}
