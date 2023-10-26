#include<stdio.h>
#include "main.h"

/**
 * set_bit - Setting the value of a bit to 1 at a given index.
 * @n: A number to be setted
 * @index: An index at which to set
 * Return: 1 if success, else -1 if an error occurred
 */
	int set_bit(unsigned long int *n, unsigned int index)
	{
	unsigned long int myBit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	myBit = 1 << index;
	*n = *n | myBit;
	return (1);
}
