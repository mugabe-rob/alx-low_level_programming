#include <stdlib.h>
#include "lists.h"

/**
* list_len - Returning number of elements in a linked list
* @h: A pointer to the list_t
* Return: The number of the elements in h
*/
	size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
	number++;
	h = h->next;
	}
	return (number);
}
