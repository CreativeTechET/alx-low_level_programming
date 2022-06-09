#include "main.h"
#include <stdio.h>


void print_triangle(int size)
{
	int height = size;
	int base = size;

	if (size == 0)
	{
		printf("\n");
	}
	else
	{
		int i;

		for (i = 0; i < height; i++)
		{
			int j;

			for (j = 0; j < base; j++)
			{
				if (j < base - i - 1)
				{
					printf(" ");
				}
				else
				{
					printf("#");
				}
			}
			printf("\n");
		}
	}
}
