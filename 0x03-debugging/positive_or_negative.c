#include "main.h"

/**
 * positive or negative - checks for positive or negative nums
 *
 * @i: the number to be checked
 *
 * Return: always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
