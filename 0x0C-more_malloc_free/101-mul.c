#include <stdio.h>
#include "main.h"
#include <stdlib.h>

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
		return (98);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		int result = num1 * num2;

		printf("%d\n", result);

	}
	return (0);
}
