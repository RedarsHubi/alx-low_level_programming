#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Returns pointers
  * @b: integer
  * Return: pointer, otherwise if failure returns 98.
  */

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b * sizeof(int));
	if (arr == NULL)
	{
		exit(98);
	}
	else
	{
		return (arr);
	}
}
