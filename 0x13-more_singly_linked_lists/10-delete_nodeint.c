#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * delete_nodeint_at_index - deletes node at index
  * @head: head of list
  * @index: index
  * Return: 1 if success, -1 is failure
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;

	listint_t *ptr;
	listint_t *ptr2 = NULL;

	ptr = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (n < index - 1 && ptr != NULL)
	{
		if (ptr2 == NULL)
			return (-1);
		ptr2 = ptr;
		ptr = ptr->next;
		n++;
	}
	ptr2->next = ptr->next;
	free(ptr);
	ptr = NULL;

	if (n != index || ptr == NULL)
		return (-1);

	return (1);
}
