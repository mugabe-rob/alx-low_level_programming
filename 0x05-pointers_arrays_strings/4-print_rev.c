#include "main.h"
/**
*print_rev - print it revesely
*@a: string
*return: Always 0
*/
void print_rev(char *a)
{
	int longi = 0;
	int o;

	while (*a != '\0')
	{
	longi++;
	a++;
	}
	a--;
	for (o = longi; o > 0; o--)
	{
	_putchar(*a);
	a--;
	}

	_putchar('\n');
}

