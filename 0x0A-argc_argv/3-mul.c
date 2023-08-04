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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		int result = i * j;

		printf("%d\n", result);

	}
	return (0);
}
