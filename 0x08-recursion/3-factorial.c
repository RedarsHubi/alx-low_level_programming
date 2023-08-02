#include "main.h"

/**
  * factorial - returns factorial of number.
  * @n: number.
  * Return: factorial of n.
  **/

int factorial(int n)
{
	if (n == 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
