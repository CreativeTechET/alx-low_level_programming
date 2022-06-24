#include <stdio.h>

/**
 * main - Entry point of the program
 * @argv: addtional parameter for the program
 * @argc: length (size) of the argv
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	if (argv[1])
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
