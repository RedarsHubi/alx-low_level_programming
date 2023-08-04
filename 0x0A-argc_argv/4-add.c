#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
  * main - main function
  * @argc: integer that that counts args.
  * @argv: pointer to argument strings
  * Return: no return
  **/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int i = 0;
		int j = 0;
		int result = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	if (argc == 0)
	{
	printf("0\n");
	}
	return (0);
}

