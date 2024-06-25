#include <stdio.h>
/**
*main - Entry point
*
*Description: print lowercase and uppercase
*alphabitical character using while loop
*
*Return: Always 0 (Success)
*/
int main(void)
{
char ch;

ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
ch = 'A';
while (ch <= 'Z')
{
putchar (ch);
ch++;
}
putchar('\n');
return (0);
}
