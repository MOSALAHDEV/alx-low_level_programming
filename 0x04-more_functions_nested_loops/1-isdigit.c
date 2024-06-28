#include "main.h"
/**
 *_isdigit - checks if a character is a digit or not
 *@c: the character to be checked
 *
 *Return: 1 if a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
