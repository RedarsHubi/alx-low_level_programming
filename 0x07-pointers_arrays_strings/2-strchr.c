#include "main.h"
#include <stddef.h>

/**
  * _strchr - function that locates first occurence of a character
  * in a string.
  * @s: pointer
  * @c: character to be found
  * Return: Pointer to modified area
  **/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);

}
