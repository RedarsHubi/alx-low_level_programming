#include "main.h"

/**
  * get_bit - returns value of index bit
  * @index: index
  * @n: number
  * Return: value of bit at index, otherwise -1.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= (sizeof(n) * 8))
		return (-1);
	i = 1 << index;
	if (n & i)
		return (1);
	else
		return (0);
}
