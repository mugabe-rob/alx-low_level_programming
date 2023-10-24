#include<stdio.h>
#include "lists.h"

/**
 * sum_listint - Calculating the sum of all the data
 * @head: The first node in the linked list
 * Return: sum
 */
	int sum_listint(listint_t *head)
	{
	int sum;
	listint_t *x = head;

	while (x)
	{
	sum += x->n;
	x = x->next;
	}

	return (sum);
}
