#include "main.h"


/**
 * _print_rev_recursion - prints out reversed string in recursion
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

