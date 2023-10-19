#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adding a new node at the end of a linked list
* @head: doubles the pointer to the list_t list
* @str: The string to put in the new node
* Return: The address of the new element, or NULL if it fails
*/
	list_t *add_node_end(list_t **head, const char *str)
	{
	list_t *new;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
	length++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->length = len;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
	}
