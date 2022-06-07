#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{

	if (n > 98)
	{
		for ( n; n >= 98; n--)
		{
			printf("%d, ",n);
			printf('\n');
		}
	}
	else if (n == 98)
	else 
	{
		int i;
		for (i = n; i <= 98; i++)
		{
			printf("%d, ",i);
			printf('\n');
		}
	}
}
