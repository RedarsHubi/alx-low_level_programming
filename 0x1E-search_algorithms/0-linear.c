#include "search_algos.h"

/**
 * linear_search - searches for value in array linearly
 * @array: input
 * @size: size array
 * @value: value
 * Return: index found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %d\n\n", value, i);
			return (array[i]);
		}
	}
	return (-1);
}
