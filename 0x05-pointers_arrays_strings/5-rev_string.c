#include "main.h"

/**
*rev_string - Reverses a string
*@a: Input string
*Return: String in reverse
*/

void rev_string(char *a)
{
	char rev = a[0];
	int counter = 0;
	int i;

	while (a[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
	counter--;
	rev = a[i];
	a[i] = a[counter];
	a[counter] = rev;
	}
}

