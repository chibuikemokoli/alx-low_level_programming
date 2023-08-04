#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endians
 * Return: 0 for big, 1 for littles
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
