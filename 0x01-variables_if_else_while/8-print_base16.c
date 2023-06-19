#include <stdio.h>

/**
 * main - prints all the numbers of base
 * Return: 0
 */
int main(void)
{
int n;
char al;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (al = 'a'; al <= 'f'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
