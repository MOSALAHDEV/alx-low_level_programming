#include "main.h"
/**
 *_atoi - convert a string to an integer
 *@s: string to be converted
 *
 *Return: sign * r
 */
int _atoi(char *s)
{
	int r = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			r = r * 10 + (*s - '0');
			if (r > 2147483647)
			{
				if (sign == 1)
				{
					return (2147483647);
				}
				else
				{
					return (-2147483647);
				}
			}
		}
		else if (r > 0)
		{
			break;
		}
		s++;
	}
	return (sign * r);
}
