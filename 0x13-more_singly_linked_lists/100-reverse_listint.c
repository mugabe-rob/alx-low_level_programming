#include<stdio.h>
#include "lists.h"

/**
 * reverse_listint - To reverse a linked list
 * @head: A pointer to the first node
 * Return: The pointer to the first node in the new list
 */
	listint_t *reverse_listint(listint_t **head)
	{
	listint_t *a = NULL;
	listint_t *b = NULL;

	while (*head)
	{
	b = (*head)->b;
	(*head)->b = a;
	a = *head;
	*head = b;
	}

	*head = a;

	return (*head);
	}
