#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - adds node at the beginning of list
  * @head: head of list
  * @n: data
  * Return: address of new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *arr;

	arr = malloc(sizeof(listint_t));

	if (arr == NULL)
		return (NULL);

	arr->n = n;
	arr->next = *head;

	*head = arr;
	return (arr);
}
