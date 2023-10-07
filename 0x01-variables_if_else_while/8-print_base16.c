#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase hexadecimal numbers 
 * from '0' to 'f' using the putchar function.
 * 
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	int digit = 48; /* ASCII value of '0' */

	while (digit <= 102) /* ASCII value of 'f' */
	{
		putchar(digit); /* Output the current character */

		if (digit == 57) /* If the current character is '9', jump to 'a' */
			digit += 39;

		++digit; /* Move to the next character */
	}

	putchar('\n'); /* Output a newline character to end the line */

	return (0); /* Return 0 to indicate successful execution */
}
