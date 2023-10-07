#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the numbers from 0 to 9 using putchar
 * while utilizing an integer variable.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	int digit = 0; /* Initialize an integer variable with 0 */

	while (digit <= 9)
	{
		/* Convert digit to ASCII representation and print it */
		putchar(digit + '0');
		++digit; /* Increment the digit to move to the next one */
	}

	putchar('\n'); /*Print a newline character to end the line */

	return (0); /* Return 0 to indicate successful execution */
}
