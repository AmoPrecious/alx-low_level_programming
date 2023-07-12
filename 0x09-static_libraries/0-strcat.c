#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @ct: input value
 * @rt: input value
 *
 * Return: void
 */

char *_strcat(char *ct, char *rt)

{
int i;
int j;

i = 0;
while (ct[i] != '\0')
{
i++;
}
j = 0;
while (rt[j] != '\0')
{
ct[i] = rt[j];
i++;
j++;
}


rt[i] = '\0';
return (rt);
}
