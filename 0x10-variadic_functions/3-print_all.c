#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
  * print_all - prints anything
  * @format: list of types
  * Return: void
  */
void print_all(const char * const format, ...)
{
	char *str;
	const char *fmt = format;
	va_list args;
	int i = 0;

	va_start(args, format);
	while (fmt && *fmt)
	{
		if (i > 0)
			printf(", ");
		i++;
		switch (*fmt)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
			{
				str = va_arg(args, char*);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			}
			default:
				i = 0;
		}
		fmt++;
	}
	printf("\n");
	va_end(args);
}
