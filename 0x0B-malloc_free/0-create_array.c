#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * create_array - creates arrays of characters
  * @size: size of int.
  * @c: character.
  * Return: 0 if NULL, otherwise pointer to the array.
  **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
