#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints out each charachter
 * @str: string where the charachters store
 */

void puts2(char *str)
{
	int i;

	int len = strlen(str);

	for (i = 0; i < (len); i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
