#include "main.h"
/**
*print_numbers - prints numbers followed by a new line
*using _puthchar twice
*
*Return: Always 0 (Success)
*/
void print_numbers(void)
{
char c;

for (c = '0'; c <='9'; c++)
{
	_putchar(c);
}
	_putchar('\n');
}
