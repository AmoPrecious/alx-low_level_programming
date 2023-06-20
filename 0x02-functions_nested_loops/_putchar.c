#include <unistd.h>

/**
 * putchar - writes the chacacter c to stdout
 * @c: The characterto print
 * Return: success 1
 * On error, -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
