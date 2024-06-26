#include "main.h"
/**
*_isalpha - check for alphabetec character
*@c: is the charcater to check
*
*Return: 1 if it is a letter otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
