#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * listint_len - returns number of elements of a list
  * @h: header
  * Return: numbers of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
