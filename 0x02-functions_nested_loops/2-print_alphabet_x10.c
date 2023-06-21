#include "main.h"

/**
 * print_alaphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

char ch;
int i = 0;

while (i <= 9)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}

}
