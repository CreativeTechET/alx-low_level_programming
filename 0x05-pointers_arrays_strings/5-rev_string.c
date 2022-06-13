#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int len = (strlen(s));
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
