#include "main.h"
/**
 *_puts - prints a string to the standard out put
 *followed by a new line
 *@str: the string to be printed
 *
 *Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
