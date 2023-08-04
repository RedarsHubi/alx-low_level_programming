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

		for (i = 0; i < argc; i++)
		{
			i = atoi(argv[i]);
			if (!isdigit(i))
			{
				printf("Error\n");
				return (1);
			}
			else if (argc == 0)
			{
				printf("0\n");
			}
			else
			{
				int result = 0;

				result = result + i;

				printf("%d\n", i);
			}
		}
	}
	return (0);
}
