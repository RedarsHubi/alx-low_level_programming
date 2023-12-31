#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * print_listint - prints all elements of a list
  * @h: header
  * Return: numbers of nodes
  */


size_t print_listint(const listint_t *h)
{
	const listint_t *arr;
	int count = 0;

	arr = h;

	while (arr != NULL)
	{
		printf("%d\n", arr->n);
		arr = arr->next;
		count++;
	}
	return (count);
}
