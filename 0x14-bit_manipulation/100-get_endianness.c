#include<stdio.h>
#include "main.h"

/**
 * get_endianness -Checking the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *myChar;

	x = 1;
	myChar = (char *)&x;
	return (*myChar);
}
