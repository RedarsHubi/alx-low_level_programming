#include "main.h"

/**
  * flip_bits - counts bits needed to flip to another num
  * @n: num1
  * @m: num2
  * Return: num of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;
	unsigned long int comp;

	comp = n ^ m;

	while (comp > 0)
	{
		bits += comp & 1;
		comp >>= 1;
	}
	return (bits);
}
