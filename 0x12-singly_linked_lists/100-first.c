#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void beatfunc(void) __attribute__ ((constructor));

/**
 * beatfunc - prints a string
 * Return: void
 */

void beatfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
