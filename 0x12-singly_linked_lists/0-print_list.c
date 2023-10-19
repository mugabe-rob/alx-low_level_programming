#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - printing all the elements in the linked list
 * @h: A pointer to the list_t to be printed
 * Return: The number of the nodes printed in h
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	node++;
	}

	return (node);
}
