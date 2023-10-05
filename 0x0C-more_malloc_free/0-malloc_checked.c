#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: a pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	ptr = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}

