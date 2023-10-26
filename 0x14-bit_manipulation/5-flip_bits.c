#include<stdio.h>
#include "main.h"

/**
 * flip_bits - Counting the number of bits to change
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to change
 */
	unsigned int flip_bits(unsigned long int n, unsigned long int m)
	{
	int counter, myCountbit = 0;
	unsigned long int currentnumber;
	unsigned long int exclusive = n ^ m;

	for (counter = 63; counter >= 0; counter--)
	{
		currentnumber = exclusive >> counter;
		if (currentnumber & 1)
			myCountbit++;
	}

	return (myCountbit);
}
