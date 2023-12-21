#include "hash_tables.h"

/**
 * hash_djb2 - Implementing of the djb2 algorithm
 * @str: A string used to generate hash value
 * Return: A hash value
**/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int counter;

	while ((counter = *str++))
		hash = ((hash << 5) + hash) + counter; /* hash * 33 + counter */

	return (hash);
}
