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
	int i, j;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		char *str = argv[i];

		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] < 0 || str[j] > 9)
			{
				printf("Error\n");
				return (98);
			}
		}}
	printf("%d\n", result);


	return (0);
}
