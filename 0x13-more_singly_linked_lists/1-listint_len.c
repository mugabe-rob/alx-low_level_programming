#include<stdio.h>
#include "lists.h"

/**
 * listint_len - Returning the number of the elements in linked list
 * @h: The linked list of type listint_t
 * Return: The number of nodes
 */
	size_t listint_len(const listint_t *h)
	{
	size_t n = 0;

	while (h)
	{
	n++;
	h = h->next;
	}

	return (n);
	}
