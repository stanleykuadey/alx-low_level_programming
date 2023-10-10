#include "main.h"

/**
 * _abs - Computes the abslute value of an integer.
 *
 * @n: The integer for which to compute the absolute value.
 *
 * Description: This function computes the absolute value
 * of the input integer 'n'.
 *
 * Return: The absolute value of 'n'.
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n; /* Calculate the absolute value if 'n' is negative */
	}
	return (n); /* Return the absolute value */
}
