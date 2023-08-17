#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - returns sum of all params
  * @n: number
  * @...: number of additional args
  * Return: sum or 0 if n is 0
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	if (n == 0)
		return (0);
	return (sum);
}
