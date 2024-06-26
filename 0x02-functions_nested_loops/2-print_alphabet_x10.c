#include "main.h"
/**
*print_alphabet_x10: prints alphabet in lowercase 10 times
*
*Description: prints the alphabet in lowercase
*and repeat 10 times using _putchar and loops
*
*/
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
