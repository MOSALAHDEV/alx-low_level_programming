#include "main.h"
/**
 **_strcat - concatenates two strings.
 *@dest: pointer to the destination string
 *@src: pointer to the source string
 *
 *Return: the function returns a pointer to the destination
 *string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;
	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];
	return (dest);
}
