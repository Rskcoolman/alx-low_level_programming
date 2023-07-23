#include "main.h"

/**
 * print_sign - Determines if the given input is
 * equal to, less or greater than zero
 *
 * @n: The input number as an integer.
 *
 * Return: 1 if n is greater than zero, 0 if n is
 * equal to zero and -1 if n is less than zero.
 */

int print_sign(int n)
{

	if (n < 0)
	{
		_putchar(45);

		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);

		return (0);
	}
	else
	{
		_putchar(43);

		return (1);
	}
	_putchar('\n');
}
