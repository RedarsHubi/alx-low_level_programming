#include "main.h"

/**
  * _strlen_recursion - returns length of string.
  * @s: pointer to string to be measured.
  * Return: string length.
  **/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
