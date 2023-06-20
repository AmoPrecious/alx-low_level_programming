#include "main.h"

/**
 * _isalpha - Checks for alphabetic chacter
 * @c: The chacter to be checked
 * Return: 1 alphabetic character or 1 anything else
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);

}
