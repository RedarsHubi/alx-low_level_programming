#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
  * print_strings - prints strings
  * @separator: separator
  * @n: number of add args
  * Return: void
  */


void print_strings(const char *separator, const unsigned int n, ...)
{
	char *store;
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		store = (va_arg(args, char*));
		if (store != NULL)
		{
		printf("%s", store);
		}
		else
		printf("(nil");
		if (i != (n - 1) && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
}
