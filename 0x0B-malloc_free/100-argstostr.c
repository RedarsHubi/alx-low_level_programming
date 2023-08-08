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


