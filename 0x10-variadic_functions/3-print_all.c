#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
  * print_all - prints everything
  * @format: list of types
  * Return: void
  */

void print_all(const char * const format, ...)
{
	va_list args;

	const char *fmt = format;

	char *str;

	va_start(args, format);

	while (*fmt)
	{
		switch (*fmt)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 's':
				str = va_arg(args, char*);
				if (str != NULL)
					printf("%s", str);
				if (str == NULL)
					printf("(nil)");
				break;
		}
		fmt++;
	}
	va_end(args);
	printf("\n");
}
