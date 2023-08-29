#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * insert_nodeint_at_index - insert node at nth pos
  * @head: head of list
  * @idx: index
  * @n: data
  * Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr2;
	listint_t *ptr;

	ptr2 = malloc(sizeof(listint_t));
	ptr2->n = n;
	ptr2->next = NULL;

	ptr = *head;

	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}
	while (i < idx - 1 && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i != idx - 1 && ptr == NULL)
		return (NULL);
	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);
}
