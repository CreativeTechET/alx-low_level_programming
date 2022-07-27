#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
    int fp;
    size_t r;
    char buffer[1000];

    
    if (filename == NULL)
    {
        return (0);
    }

    fp = open("Requiescat",O_RDONLY);
    if (fp == -1)
    {
        return (0);
    }

    r = read(fp,buffer,letters);
    fprintf(stdout,buffer,letters);

    close(fp);


    return r;
}

