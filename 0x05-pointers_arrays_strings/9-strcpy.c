#include "main.h"
/**
 **_strcpy - copies the string pointed to by src, including
 *the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest: destination buffer where the string is copied.
 *@src: the source string to be copied
 *
 *return: pointer to dest
 *
 *Return: (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0')

		;
	return (dest);
}
