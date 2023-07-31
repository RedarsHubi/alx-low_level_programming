#include "main.h"

/**
  * _memset - function that fills memory area with
  * constant bytes.
  * @s: pointer
  * @b: bytes
  * @n: number of filled locations
  * Return: Pointer to modified area
  **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
