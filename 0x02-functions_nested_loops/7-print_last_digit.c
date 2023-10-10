#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 *
 * @n: The number for which to print the last digit.
 *
 * Description: This function calculates and prints the
 * last digit of the input integer 'n'.
 *
 * Return: The last digit of 'n'.
*/

int print_last_digit(int n)
{
	int lastDigit;

	/* Calculate the abslute value of 'n' for consistency */
	if (n < 0)
	{
		n = -n;
	}

	lastDigit = n % 10; /* Calculate the last digit */

	_putchar(lastDigit + '0'); /* Print the last digit as a character */
	return (lastDigit); /* Return the last digit as an intger */
}
