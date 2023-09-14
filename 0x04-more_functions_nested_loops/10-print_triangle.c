#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @s: size of the triangle
 */
void print_triangle(int s)
{
	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= s; a++)
		{
			for (b = i; b < s; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

