#include "main.h"

/**
 * get_endianness - checks if little or big endian
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
