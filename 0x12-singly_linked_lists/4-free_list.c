#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_list - free list_t
  * @head: pointer to first node
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
		temp = NULL;
	}
}
