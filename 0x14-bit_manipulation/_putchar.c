#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the chracter c to stdout
 * @c: The character to pnt
 *
 * Return: On success 1.0.
 * On error, -1 is return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
