#include <stdio.h>
/**
*main - Entry point
*
*Description: print all single digit number of base 10
*starting from 0
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
