#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * _strdup - returns pointer to a duplicate string
  * @str: string to be duplicated
  * Return: NULL if NULL, otherwise location of duplicated string
  **/

char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		dup[j] = str[j];
	}

	return (dup);
}
