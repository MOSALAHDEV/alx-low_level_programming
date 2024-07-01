#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 */
void times_table(void)
{
	int n, mlt, pr;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (mlt = 0; mlt <= 9; mlt++)
		{
			_putchar(',');
			_putchar(' ');
			pr = n * mlt;
			if (pr <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((pr / 10) + 48);
			_putchar((pr / 10) + 48);
		}
		_putchar('\n');
	}
}
