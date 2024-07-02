#include "main.h"
#include <string.h>
/**
 *_strlen - function determines the length of a string
 *
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

