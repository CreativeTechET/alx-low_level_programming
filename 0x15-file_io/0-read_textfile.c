#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
    int fp;
    size_t r,f;
    char *buffer;

    if (filename == NULL)
    {
        return (0);
    }
    buffer = malloc(letters * sizeof(char) + 1);
    if (buffer == NULL)
    {
        return (EXIT_FAILURE);
    }

    fp = open("Requiescat",O_RDONLY);
    if (fp == -1)
    {
        return (0);
    }
    
    r = read(fp,buffer,letters);
    if ((int)r == -1)
    {
        return (0);
    }
    buffer[letters] = '\0';
    
    f = write(STDOUT_FILENO,buffer,r);
    if ((int)f == -1)
    {
        return (0);
    }
    free(buffer);
    close(fp);


    return (f);
}

