#include "main.h"
/**
*_islower - checks if a character is lower
*Description: checks if a charcter is lower using 
*_islower function
*
*c: the character to check
*Return: 1 if c is lowercase otherwise 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
