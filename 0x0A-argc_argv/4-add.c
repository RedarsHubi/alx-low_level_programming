#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		int result = i + j;

		printf("%d\n", result);
	}
	else if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
