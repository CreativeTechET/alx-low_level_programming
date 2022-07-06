#include "function_pointers.h"

/**
 * print_name - function takes function pointer as a param and invoks it
 * @name: name to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
