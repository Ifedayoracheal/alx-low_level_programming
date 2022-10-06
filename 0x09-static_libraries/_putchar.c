#include <unistd.h>

/**
 * _putchar - write the charcter c to stndout
 * @c: the character is print
 *
 * Return: success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
