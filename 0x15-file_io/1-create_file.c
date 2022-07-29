#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file, i,add;

	if (filename == NULL)
		return FAILED;

	file = open(filename, O_RDWR || O_CREAT, O_TRUNC, 0600);
	if (file == -1)
		return FAILED;

	if (text_content)
	{
		i = 0;
		while (text_content[i])
		{
			i++;
		}
		add = write(file,text_content,i);
		if (add != i)
			return FAILED;
	}
	close(file);
	return (1);
}