#include "main.h"
/**
*puts_half - a function that prints half of a string
*if odd len, z = (length_of_the_string - 1) / 2
*@s: input
*Return: half of input
*/
void puts_half(char *s)
{
	int x, z, longi;

	longi = 0;

	for (x = 0; s[x] != '\0'; x++)
	longi++;

	z = (longi / 2);

	if ((longi % 2) == 1)
	z = ((longi + 1) / 2);

	for (x = z; s[x] != '\0'; x++)
	_putchar(s[x]);
	_putchar('\n');
}

