#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * get_nodeint_at_index - gets nth node of list
  * @head: head of  list
  * @index: current position
  * Return: returns nth node, otherwise NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *ptr;

	ptr = head;

	if (head == NULL)
		return (NULL);
	while (n != index  && ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	if (n != index)
		return (NULL);

	return (ptr);
}
