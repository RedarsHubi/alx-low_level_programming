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
	int i, j, in, z;

	if (ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			in++;
		}
		in++;
	}
	arr = malloc((in + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (z = 0; z <= in; j++, z++)
	{
		if (av[i][j] == '\0')
		{
			arr[z] = '\n';
			i++;
			z++;
			j = 0;
		}
		if (z < in - 1)
		{
			arr[z] = av[i][j];
		}
		arr[z] = '\0';
	}
	return (arr);
}
