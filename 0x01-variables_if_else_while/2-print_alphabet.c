#include <stdio.h>
/**
*main - Entry point
*
*Description: print lowercase alphabitical character using while loop
*
*Return: Always
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
putchar('\n');
return (0);
}
