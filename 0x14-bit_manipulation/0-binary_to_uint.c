#include "main.h"
#include <string.h>
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: a string of 0 and 1
  * Return: convert num or 0
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int length;
	unsigned int num = 0;

	for (length = 0; b[length] != '\0'; length++);

	if (b == NULL)
		return (0);
	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
