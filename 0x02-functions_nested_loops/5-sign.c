#include "main.h"

/**
 * print_sign - Print "+" if n is greater than zero,
 * "0" if n is zero, and "-" if n is less than zero.
 *
 * @n: Integer input for the function.
 *
 * Description: This function checks the sign of the input
 * integer 'n' and prints the corrsponding sign character.
 *
 * Return: 1 if 'n' is positive, 0 if 'n' is zero, and -1 if
 * 'n' is negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+'); /* Print "+" for positive 'n' */
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0'); /* Print "0" for 'n' equal to zero */
		return (0);
	}
	else
	{
		_putchar('-'); /* Print "-" for negative 'n' */
		return (-1);
	}
}
