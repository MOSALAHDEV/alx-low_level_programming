#include "main.h"
/**
*print_alphabet - print alphabet in lowercase
*using _putchar function followed by a newline
*
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
