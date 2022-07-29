#include "main.h"

/**
 * append_text_to_file - adds a text to an existing file
 * @filename: the name of the file
 * @text_content: the text to append
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, i;

	if (filename == NULL)
		return (FAILED);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (FAILED);
	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		w = write(file, text_content, i);
		if (w == FAILED)
			return (FAILED);
	}
	close(file);
	return (SUCCESS);
}
