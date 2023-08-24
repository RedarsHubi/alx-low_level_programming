#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node - prints all the elements of a list_t list
  * @head: pointer to node
  * @str: string
  * Return: address of new now, otherwise NULL
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	while (newnode != NULL)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}
	return (NULL);
}
