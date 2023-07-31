#include "main.h"

/**
  * _memcpy - function that fills memory area with
  * constant bytes.
  * @dest: destination of copied bytes
  * @src: bytes that are copied
  * @n: number of filled locations
  * Return: Pointer to copied area
  **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
