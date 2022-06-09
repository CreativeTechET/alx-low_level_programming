#include "main.h"

/**
 * print_square - prints out squares
 * @size: size of square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= size)
		{
			int j;

			for (j = 1; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			i++;
			_putchar('\n');
		}
	}
}
