#include<stdio.h>
#include "main.h"

/**
 * _pow - A function to calculate the base power
 * @base: The base of the number
 * @power: The power of the number
 * Return: The value of base power
 */
	unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int counter;

	number = 1;
	for (counter = 1; counter <= power; counter++)
		number *= base;
	return (number);
}

/**
 * print_binary - Printing a number in binary form
 * @n: A number to print out
 * Return: void
 */
	void print_binary(unsigned long int n)
	{
	unsigned long int divider, checker;
	char myChar;

	myChar = 0;
	divider = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divider != 0)
	{
		checker = n & divider;
		if (checker == divider)
		{
			myChar = 1;
			_putchar('1');
		}
		else if (myChar == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}
