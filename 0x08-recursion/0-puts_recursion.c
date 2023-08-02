#include "main.h"

/**
  * _puts_recursion - prints a string.
  * @s: pointer to string to be printed.
  * Return: no return.
  **/

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
