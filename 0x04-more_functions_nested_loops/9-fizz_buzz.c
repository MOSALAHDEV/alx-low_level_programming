#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 *
 *Description: prints numbers from 1 to 100
 *for multiples of three print Fizz for multiples of
 *print buzz for both prints FizzBuzz
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if	(num % 3 == 0)
		{
			printf("fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
