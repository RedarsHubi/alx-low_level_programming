#include "function_pointers.h"

/**
  * f - function that prints name
  * @str: string
  */

void f(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

}
/**
  * print_name - function that prints name
  * @name: string
  * @f: function that takes string
  */
void print_name(char *name, void (*f)(char *))
{
	(*f) (name);
}
