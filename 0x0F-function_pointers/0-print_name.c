#include "function_pointers.h"

/**
  * print_name - function that prints name
  * @name: string
  * @f: function that takes string
  */

void f(char *)
{
	int i;
	char *str;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

}

void print_name(char *name, void (*f)(char *))
{
	(*f) (name);
}
