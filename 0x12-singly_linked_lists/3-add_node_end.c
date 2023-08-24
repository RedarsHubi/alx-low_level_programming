#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to head
 * @str: string
 * Return: address of created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *new = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode != NULL)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
		if (*head == NULL)
		{
			*head = newnode;
			return (newnode);
		}
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = newnode;
	}
	return (newnode);
}
