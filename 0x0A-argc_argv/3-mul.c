#include <stdio.h>
#include<stdlib.h>

/**
 * main - Entry point of the program
 * @argv: addtional parameter for the program
 * @argc: length (size) of the argv
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	if ((argv[1] && argv[2]) || argc == 3)
	{
		int res = atoi(argv[1]);
		int res2 = atoi(argv[2]);

		printf("%d\n", res * res2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

