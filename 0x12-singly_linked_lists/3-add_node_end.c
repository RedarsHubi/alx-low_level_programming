#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node_end - adds node at the end
  * @head: pointer to node
  * @str: string
  * Return: address of new node, otherwise NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *new = *head;

	while (newnode != NULL)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);

		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = newnode;

		return (newnode);
	}
	return (NULL);
}
