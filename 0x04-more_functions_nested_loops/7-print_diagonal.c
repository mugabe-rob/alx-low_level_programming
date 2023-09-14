#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @a: number of times the character \ should be printed
 */

void print_diagonal(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

