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
	int j = 0;
	int length;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
	}
	return (length);
}
