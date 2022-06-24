#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argv: addtional parameter for the program
 * @argc: length (size) of the argv
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int i, res = 0;

		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

