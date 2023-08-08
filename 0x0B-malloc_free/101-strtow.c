#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - splits strings into words
 * @str: string
 *
 * Return: pointer to an array of words
 */
char **strtow(char *str)
{
	int i;
	int count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			str[i] = '\0';
			str[i + 1] = '\n';
			count++;
		}
	}
	str = malloc(sizeof(char) * count + 1);
	return (str);
}
