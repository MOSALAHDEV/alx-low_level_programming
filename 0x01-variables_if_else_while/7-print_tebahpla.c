#include <stdio.h>
/**
*main - Entry point
*
*Description: print lowercase
*in reverse
*
*Return: 0 (Success)
*/
int main(void)
{
	int ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
