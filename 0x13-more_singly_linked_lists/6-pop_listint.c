#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * pop_listint - deletes the head node of a list
  * @head: head of node
  * Return: head node's data, otherwise 0.
  */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int store;

	temp = *head;
	*head = (*head)->next;
	store = temp->n;
	free(temp);

	if (*head == NULL)
		return (0);
	return (store);
}
