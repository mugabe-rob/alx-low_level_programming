#include<stdio.h>
#include <unistd.h>

/**
 * _putchar - Writing the char c to stdout
 * @c: The character to be printed
 * Return: On success 1.
 * On error, -1 is returned
 */
	int _putchar(char c)
	{
	return (write(1, &c, 1));
	}
