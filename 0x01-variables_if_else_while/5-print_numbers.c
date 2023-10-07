#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers from 0 to 9.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	int digit = 0; /* Initialize an integer variable with 0 */

	while (digit <= 9)
	{
		printf("%i", digit); /* Print the current digit */
		++digit; /* Increment the digit to move to the next one */
	}

	printf("\n"); /* Print a newline character to end the line */

	return (0); /* Return 0 to indicate successful execution */
}
