#include "main.h"

/**
  * _pow_recursion - returns x to the power of y.
  * @x: number.
  * @y: power.
  * Return: x, if y lower than 0 then -1.
  **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else
	{
		return (x * (_pow_recursion(x, (y - 1))));
	}
}

