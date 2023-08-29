#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: head of list
 * Return: pointer to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		(*head) = temp2;
	}
	(*head)->next = temp;
	return (*head);
}
