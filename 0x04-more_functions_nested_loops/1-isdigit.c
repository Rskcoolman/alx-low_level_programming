#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks for a digit ( 0 through 9)
 *
 * @c: first parameter
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
