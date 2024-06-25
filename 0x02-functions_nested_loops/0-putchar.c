#include "main.h"
/**
*main - Entry point
*Description: prints "_putchar" followed by
*new line using _putchar function
*
*Return: Always 0
*/
int main(void)
{
	char greet[] = "_putchar\n";
	int i;

	for (i = 0; greet[i] != '\0'; i++)
	{
		_putchar(greet[i]);
	}
	return (0);
}
