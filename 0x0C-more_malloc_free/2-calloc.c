#include "main.h"
#include <stdlib.h>
/**
 * _calloc - returns pointer to arrray
 * @nmemb: int
 * @size: int
 * Return: pointer to array, NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
