#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings.
  * @s1: string
  * @s2: string
  * @n: integer.
  * Return: pointer, otherwise if failure returns NULL.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= sizeof(s2))
	{
		arr = malloc(sizeof(char) * (i + j + 1));
	}
	else
	{
		arr = malloc(sizeof(char) * (i + n + 1));
	}
	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}
	for (k = 0; k < n && s2[k] != '\0'; k++)
	{
		arr[i + k] = s2[k];
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
