#include "main.h"
/**
 **_strncpy - copies up to n characters from src to dest
 *@dest: Pointer to the destination array
 *@src: pointer to the source string to be copied from
 *@n: maximum numbers of charcters to be copied
 *
 *Return: function returns a pointer to the destination arry (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
