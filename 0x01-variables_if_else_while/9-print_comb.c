#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the numbers from 0 to 9, separated by commas and
 * spaces.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	int digit = 0; /* Initialize an integer variable with 0 */

	while (digit <= 9)
	{
		putchar(digit +48); /* Output the current digit as a character */

		if (digit != 9)
		{
			putchar(','); /* Output a comman if the digit is not 9 */
			putchar(' '); /* Output a space after the comma */
		}

		++digit; /* Increment the digit to move to the next one */
	}

	putchar('\n'); /* Output a newline character to end the line */

	return (0); /* Return 0 to indicate successful execution */
}
