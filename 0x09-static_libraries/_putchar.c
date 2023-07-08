#include <stdio.h>
#include "main.h"

/**
 * _putchar: writec the character c to stdout
 * @c: the character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (fwrite (1, &c, 1)),
}
