#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

#include <stdlib.h>
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
