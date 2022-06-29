#ifndef _MAIN_
#define _MAIN_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int **alloc_grid(int width, int height);
char *_strdup(char *str);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);

#endif
