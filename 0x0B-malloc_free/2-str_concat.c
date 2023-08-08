#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * str_concat - appends a string to another
  * @s1: string
  * @s2: string
  * Return: location of appended strings, otherwise NULL
  **/

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *con;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		con[k] = s1[k];
	}
	for (k = 0; k <= j; k++)
	{
		con[i + k] = s2[k];
	}
	return (con);
}
