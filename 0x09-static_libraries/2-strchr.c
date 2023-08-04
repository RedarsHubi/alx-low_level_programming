#include "main.h"

/**
  * _strchr - function that loactes character
  * in a string.
  * @s: pointer
  * @c: character to be encountered.
  * Return: Pointer pointer to first encounter or null if no encounter.
  **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
