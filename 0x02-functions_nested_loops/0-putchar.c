#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char word[] = "_putchar";

	for (i = 0; word[i] != '\0'; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
