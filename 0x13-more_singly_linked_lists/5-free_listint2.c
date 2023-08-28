#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - free list_t
  * @head: pointer to first node
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = *head;
		*head = *head->next;
		free(temp);
		temp = NULL;
	}
}
