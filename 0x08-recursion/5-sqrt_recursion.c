#include "main.h"

/**
  * _sqrt_recursion - returns sqrt of natural numb.
  * @n: number.
  * Return: sqrt of n.
  **/

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else if (i * i < n)
	{
		return (_sqrt_recursion(n / (i + 1)));
	}
	return (-1);
}
