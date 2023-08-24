#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * list_len - calculates all the elements of list_t
  * @h: string
  * Return: number of elements linked
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
