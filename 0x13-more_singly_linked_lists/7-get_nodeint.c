#include<stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index
 * @head: The first node in the linked list
 * @index: An index of the node to return
 * Return: The pointer to the node we're looking for, or NULL
 */
	listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
	{
	unsigned int counter = 0;
	listint_t *temp = head;

	while (temp && counter < index)
	{
	temp = temp->next;
	counter++;
	}

	return (temp ? temp : NULL);
	}
