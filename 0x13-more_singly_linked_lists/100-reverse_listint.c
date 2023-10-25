#include<stdio.h>
#include "lists.h"

/**
 * reverse_listint - To reverse the linked list
 * @head: The pointer to the first node in the list
 * Return: A pointer to the first node
 */
	listint_t *reverse_listint(listint_t **head)
	{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = previous;
	previous = *head;
	*head = next;
	}

	*head = previous;

	return (*head);
	}

