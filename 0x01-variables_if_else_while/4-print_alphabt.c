#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
char al = 'a';

while (al <= 'z')
{
if (al != 'e' && al != 'q')
{
putchar(al);
}
al++;
}
putchar('\n');
return (0);
}
