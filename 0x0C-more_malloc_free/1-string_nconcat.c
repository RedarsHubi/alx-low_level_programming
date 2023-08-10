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
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
	{
		n = j;
	}

	l = i + n;

	arr = malloc(l + 1);
	for (k = 0; k < l; k++)
	{
		if (k < i)
		{
			arr[k] = s1[k];
		}
		else
		{
			arr[k] = s2[k - i];
		}
	}
	arr[k] = '\0';
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
