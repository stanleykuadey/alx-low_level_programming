#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 *
 * @n: The number for which to print the last digit.
 *
 * Description: This function calculates and prints the
 * last digit of the input integer 'n'.
 * If 'n' is negative , the last digit is printed as a
 * positive value.
 *
 * Return: The value of the last digit of 'n'.
*/

int print_last_digit(int n)
{
	int last_digit = n % 10; /* Calculate the last digit */

	if (last_digit < 0)
	{
		last_digit *= -1; /* Ensure last_digit is positive for printing */
	}

	_putchar(last_digit + '0'); /* Print the last digit as a character */
	return (last_digit); /* Return the last digit as an integer */
}
