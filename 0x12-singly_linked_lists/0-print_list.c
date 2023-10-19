#include <stdio.h>
#include "lists.h"

/**
 * print_list - printing all the elements in the linked list
 * @h: A pointer to the list_t to be printed
 * Return: The number of the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", a->len, a->str);
	a = a->next;
	size++;
	}

	return (size);
}
