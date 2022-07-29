#include "main.h"

/**
 * main - main function to run the application
 * @argc: number of arguments to be passed to the program
 * @argv: array of arguments to be passed to the program
 * Return: 0 on success, 97,98,99 on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, i = 0, r, w, c;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == FAILED)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file_from == FAILED)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}

	r = read(file_from, buffer, sizeof(buffer) - 10);

	if (r == FAILED)
		exit(99);

	while (buffer[i])
		i++;
	w = write(file_to, buffer, i);
	c = close(file_to);
	if (c == FAILED)
	{
		fprintf(stderr, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	c = close(file_from);
	if (c == FAILED)
	{
		fprintf(stderr, "Error: Can't close fd %d", file_from);
		exit(100);
	}

	return (SUCCESS);
}
