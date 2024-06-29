#include "main.h"
/**
 *print_most_numbers - print all numbers except 2 and 4
 *
 *i@= numbers to be checked
 *
 *Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
