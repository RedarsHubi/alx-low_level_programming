#include "function_pointers.h"

/**
  * array_iterator - function that executes fct with arr of par
  * @array: array
  * @size: size
  * @action: pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
