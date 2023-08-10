#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: pointer to newly created array of ints.
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(max - min + 1);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
