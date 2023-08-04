#include "main.h"

/**
  * _strspn - function that fills memory area with
  * constant bytes.
  * @s: string that will be evalutated
  * @accept: criteria that needs to be validated
  * Return: length of matching characters in substring
  **/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int length;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			if (accept[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}
