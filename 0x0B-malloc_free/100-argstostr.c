#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @av: strings to be concatenated
 * @ac: number of arrays
 * Return: pointer to new a string
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j;
	int st = 0;
	int l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			st++;
		}
		st++;
	}
	arr = malloc((st + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*(arr + l) = av[i][j];
			l++;
		}
		*(arr + l) = '\n';
		l++;
	}
	return (arr);
}
