#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, b = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			b = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - b]);
	}
	_putchar('\n');
}
