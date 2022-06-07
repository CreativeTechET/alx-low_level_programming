#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{

	if (n > 98)
	{	int i;
		if (n != 98)
		{
			printf("%d, ",i);
		}
		else
		{
			printf("%d",i);
			printf("\n");
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
			if (n == 98)
			{
				printf("%d",n);
			}
			printf("%d, ",i);
		}
		printf("\n");
	}
}
