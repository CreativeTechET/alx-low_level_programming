#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main Entry
 * Return: returns 0
 */

int main(void)
{
	int n,k;
	int i = 0;

	srand(time(NULL));
	while (i < 1)
	{
		n = rand();
		k = rand();

		i++;
		printf("%d%d\n", n, k);
	}
	return (0);
}
