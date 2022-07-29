#ifndef MAIN
#define MAIN

/**
 * main header file for the file io project
 * consissts of some forwarde declaration of functions
 */
#include <unistd.h>

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>

#define FAILED -1
#define SUCCESS 1

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
