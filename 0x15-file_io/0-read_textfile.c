#include "main.h"

/**
 * read_textfile - read a text file and print it to stdout
 * @letters: the number of letters to read
 * @filename: The name of the file to read
 * Return: 0 on success, -1 on error.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    size_t  r, wr, file;
	char *buffer;

	if (filename == NULL)
		return (0);
	
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if ((int)file == FAILED)
	{
		free(buffer);
		return (0);
	}
	r = read(file, buffer, letters);
	if ((int)r == FAILED)
	{
		free(buffer);
		close(file);
		return (0);
	}
	
	wr = write(STDOUT_FILENO, buffer, r);
	
	if (wr != r|| (int)wr == FAILED)
	{
		free(buffer);
		close(file);
		return (0);
	}

	close(file);
	free(buffer);
	return (wr);
}
