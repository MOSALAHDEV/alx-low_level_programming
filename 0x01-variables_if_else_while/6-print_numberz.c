#include <stdio.h>
/**
*main - Entry point
*
*Description: printing all single digit
*number without using char var
*
*Return: Always 0 (Success)
**/
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
