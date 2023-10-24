#include<stdio.h>
#include "lists.h"

/**
 * add_nodeint - This adds a new node at the beginning of a linked list
 * @head: The pointer to the first node in the list
 * @n: Data to be inserted in that new node
 * Return: pointer to the new node
 */
	listint_t *add_nodeint(listint_t **head, const int n)
	{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
	return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
