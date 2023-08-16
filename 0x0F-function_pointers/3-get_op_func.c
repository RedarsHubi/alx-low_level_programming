#include "3-calc.h"
#include <stddef.h>
/**
  * get_op_func - selects the correct function to perform the operation
  * @s: operator passed as argument to the program
  * Return: pointer to correct operation
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
		return (NULL);
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
