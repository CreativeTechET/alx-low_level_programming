#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int height = size;
	int base = size;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < height; i++)
		{
			int j;

			for (j = 0; j < base; j++)
			{
				if (j < base - i - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
