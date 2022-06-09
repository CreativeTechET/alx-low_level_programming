#include "main.h"



void print_triangle(int size)
{
	int height = size;
	int base = size;

	if (size == 0)
	{
		printf('\n');
	}
	else
	{

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < base; j++)
			{
				if (j < base - i - 1)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}
}
