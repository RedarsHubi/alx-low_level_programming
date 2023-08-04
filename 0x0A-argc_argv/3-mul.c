#include <stdio.h>
#include "main.h"

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
		printf("Error");
		return (1);
	}
	else
	{
		int i = 5;
		int j = 6;

		printf("%d\n", i * j);
		(void)argv;
	}
	return (0);
}
