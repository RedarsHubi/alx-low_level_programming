#include "main.h"
#include <stddef.h>

/**
  * _strstr - function that loactes character
  * in a string.
  * @haystack: string to checked
  * @needle: substring to be found
  * Return: location of first encounter, otherwise NULL.
  **/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			int j;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				if (needle[j] == '\0')
				{
					return (haystack + i);
				}
			}
		}
}
	return (NULL);
}
