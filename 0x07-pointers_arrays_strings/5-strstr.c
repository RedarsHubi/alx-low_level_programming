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
	char *a;
	char *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
