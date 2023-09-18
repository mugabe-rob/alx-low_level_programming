#include "main.h"
/**
*puts2 - function should print only one out of two char,
*starting with the first one
*@s: input
*Return: print
*/
void puts2(char *s)
{
	int longi = 0;
	int t = 0;
	char *y = s;
	int o;

	while (*y != '\0')
	{
	y++;
	longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
	if (o % 2 == 0)
	{
	_putchar(s[o]);
	}
	}
	_putchar('\n');
}

