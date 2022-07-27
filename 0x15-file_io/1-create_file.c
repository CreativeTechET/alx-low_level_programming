#include "main.h"

int create_file(const char *filename, char *text_content){
	int file, wr, len;
	
	if (filename == NULL)
		return (-1);
	
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if ((int)file == FAILED)
	{
		return (0);
	}
	len = strlen(text_content);
	wr = write(file, text_content, len);
	if (wr != len || (int)wr == FAILED)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}