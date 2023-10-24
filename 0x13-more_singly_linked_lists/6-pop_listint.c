#include<stdio.h>
#include "lists.h"

/**
 * pop_listint - Deleting the head node of a linked list
 * @head: The pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted
 */
	int pop_listint(listint_t **head)
	{
	listint_t *q;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	q = (*head)->next;
	free(*head);
	*head = q;

	return (num);
	}
