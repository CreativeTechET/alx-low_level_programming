#ifndef MAIN
#define MAIN

#include <unistd.h>

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>

#define FAILED -1
ssize_t read_textfile(const char *filename, size_t letters);

#endif
