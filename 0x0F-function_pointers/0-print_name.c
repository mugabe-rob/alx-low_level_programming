#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name by using pointer to function
 * @name: string that is to add
 * @f: pointer to a function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

