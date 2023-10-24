#include<stdio.h>
#include "lists.h"

/**
 * sum_listint - Calculating the sum of all the data in a list
 * @head: first node in the linked list
 * Return: sum
 */
	int sum_listint(listint_t *head)
	{
		int sum = 0;
	listint_t *data = head;

	while (data)
	{
	sum += data->n;
	data = data->next;
	}

	return (sum);
	}
