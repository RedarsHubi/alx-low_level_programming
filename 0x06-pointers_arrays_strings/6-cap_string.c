#include <stdio.h>

/**
 * capitalizeWords - Capitalizes the first letter of each word in a string.
 * @str: The input string to be modified.
 */
void capitalizeWords(char *str)
{
	int capitalizeNext = 1;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
	{
		if (capitalizeNext)
		{
			*str = *str - ('a' - 'A');
			capitalizeNext = 0;
		}
	}
		else if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			capitalizeNext = 1;
		}
		str++;
	}
}

