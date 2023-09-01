#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big, -1 little
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
