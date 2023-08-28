#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - adds node at the end of list
  * @head: head of list
  * @n: data
  * Return: address of new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *arr;

	listint_t *current = *head;

	arr = malloc(sizeof(listint_t));

	if (arr == NULL)
		return (NULL);

	arr->n = n;
	arr->next = NULL;

	while (current->next != NULL)
		current = current->next;
	current->next = arr;
	return (arr);
}
