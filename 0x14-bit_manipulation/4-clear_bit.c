#include<stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - Setting the value of a bit to 0 at a given index
 * @n: number to be setted
 * @index: An index to be used
 * Return: 1 if success, else -1 if failure
 */
	int clear_bit(unsigned long int *n, unsigned int index)
	{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
