#include "main.h"
/**
 *
 *
 *
 */
int main (void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 ==0 && num % 5 == 0)
		{
			printf("fizz");
		}
		else if (num % 5)
