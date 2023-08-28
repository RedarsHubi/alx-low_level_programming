#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * listint_len - returns number of elements of a list
  * @h: header
  * Return: numbers of nodes
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *arr;
	int count;

	arr = h;

	while (arr != NULL)
	{
		arr = arr->next;
		count++;
	}
	return (count);
}
