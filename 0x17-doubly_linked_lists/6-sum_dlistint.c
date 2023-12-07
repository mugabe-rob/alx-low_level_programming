#include "lists.h"

/**
 * sum_dlistint - Returning the sum of all the data (n)
 * of a doubly linked list
 * @head: head of list
 * Return: sum of data
 */
	int sum_dlistint(dlistint_t *head)
{
	int summ;

	summ = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			summ += head->n;
			head = head->next;
		}
	}

	return (summ);
}
