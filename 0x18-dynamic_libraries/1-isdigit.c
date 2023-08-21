#include "main.h"

/**
 * _isdigit - checks if char is digit
 * @x: the number to check
 * Return: 1 for digit or 0 for else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
