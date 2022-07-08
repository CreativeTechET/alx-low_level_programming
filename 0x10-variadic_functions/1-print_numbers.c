#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: separator char
 * @n: number of arg
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int res;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{

		res = va_arg(args, int);
		printf("%d", res);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
