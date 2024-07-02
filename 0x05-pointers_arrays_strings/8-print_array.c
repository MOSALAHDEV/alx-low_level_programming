#include "main.h"
/**
 *
 *
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[n]);
		if (i != n-1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
