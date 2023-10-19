#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adding a new node at the beginning of a linked list
* @head: A double pointer to the list_t list
* @n: The int a new node will contain
* Return: When the function fails - NULL
*/
list_t *add_node(list_t **head, const int n)
{
	listint_t *new:

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
