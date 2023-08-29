#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * sum_listint - returns sum of all data n
  * @head: head of list
  * Return: sum of all data, otherwise 0
  */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int store = 0;

	ptr = head;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		store = store + ptr->n;
		ptr = ptr->next;
	}
	return (store);
}
