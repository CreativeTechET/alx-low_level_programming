#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{

	if (n > 98)
	{	int i;
		for (i = n; i > 99; i--)
		{
			printf("%d, ", n);
			if (n == 98)
			{
				printf("%d",n);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d",n);
		printf("\n");
	}
	else 
	{
		int i;
		for (i = n; i < 99; i++)
		{
			printf("%d, ",i);
		}
	}
}
