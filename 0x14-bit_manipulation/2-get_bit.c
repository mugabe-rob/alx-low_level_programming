#include<stdio.h>
#include"main.h"

/**
 * get_bit - Returns the value of a bit for a given index
 * @n: The number that checks the bits in
 * @index: An index at which to check
 * Return: The value of the bit
 */
	int get_bit(unsigned long int n, unsigned int index)
	{
	unsigned long int div, counter;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	counter = n & div;
	if (counter == div)
		return (1);
	return (0);
}
