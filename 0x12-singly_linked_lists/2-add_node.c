#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adding a new node to the beginning of linked list
* @head: The double pointer to the list_t list
* @str: A new string to add the node
* Return: The address of the new element, or NULL if it fails
*/
	list_t *add_node(list_t **head, const char *str)
	{
	list_t *nodes;
	unsigned int length = 0;

	while (str[length])
	length++;

	nodes = malloc(sizeof(list_t));
	if (!nodes)
	return (NULL);

	nodes->str = strdup(str);
	nodes->length = length;
	nodes->next = (*head);
	(*head) = nodes;

	return (*head);
}

