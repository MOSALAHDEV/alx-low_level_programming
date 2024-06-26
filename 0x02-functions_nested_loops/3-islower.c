#include "main.h"
/**
*_islower - checks if a character is lower
*
*@c - the character to check
*
*Description: checks if @c is lower using
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
