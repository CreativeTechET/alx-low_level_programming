#include <stdio.h>

/**
 * main - Entry point of the program
 * @argv: addtional parameter for the program
 * @argc: length (size) of the argv
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
