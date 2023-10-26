#include<stdio.h>
#include "main.h"

/**
 * binary_to_uint - The function to convert a binary number to an unsigned int.
 * @b: A pointer to a string with a binary number
 * Return: unsigned integer with decimal value
 */
	unsigned int binary_to_uint(const char *b)
	{
	int counter;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
	}
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		number <<= 1;
		if (b[counter] == '1')
			number += 1;
	}
	return (number);
}
