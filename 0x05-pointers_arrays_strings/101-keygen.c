#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		if (r >= 1 && r <= 10 )
		{
			c = c + r;
			printf("%c", r);
		}
	}
	printf("%c\n", (2772 - c));
	return (0);
}
