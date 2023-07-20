#include "main.h"

/**
  * more_numbers - prints digits from 0 to 14
  * 10 times
  * Return: digits
  **/

void more_numbers(void)
{
	int i;
	int j;
	int f;
	int h;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (f = 0; f <= 1; f++)
		{
			for (h = 48; h <= 52; h++)
			{
				_putchar(h);
			}
		_putchar('\n');
		}
	}
}
