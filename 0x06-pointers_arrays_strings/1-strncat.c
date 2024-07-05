#include "main.h"
/**
 **_strncat - Concatenates up to n characters from src to dest
 *@dest: pointer to the destination string
 *@src: pointer to the source string
 *@n: maximum number of characters to append from source
 *
 *Return: the returns a pointer to the string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c] != '\0')
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
