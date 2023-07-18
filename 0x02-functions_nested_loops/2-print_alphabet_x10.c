  #include "main.h"
  /**
   *print_alphabet_x10 - prints alphabet in lowercase 10 times
    * return (0) success
  **/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(i);
	}
	_putchar('\n');
}
