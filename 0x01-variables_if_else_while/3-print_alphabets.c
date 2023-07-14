#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	char b[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	} for (i = 0; i < 26; i++)
	{
		putchar(b[i]);
	}
	putchar ('\n');
	return (0);
}
