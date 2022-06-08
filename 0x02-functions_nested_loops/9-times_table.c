#include "main.h"

void times_table(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{	
		int j;

		for (j = 0; j < 10; j++)
		{
			printf("%d, ", i * j);
		}
		printf("\n");
	}
}
