#include "main.h"
/**
*_islower - checks if a character is lower
*
*Description: checks if a charcter is lower using 
*_islower function
*
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
