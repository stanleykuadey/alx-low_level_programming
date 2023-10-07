#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse order,
 * from 'z' to 'a', using the putchar function.
 *
 * Return: Always 0 (indicating that the program executed successfully)
*/

int main(void)
{
	char ch = 'z'; /* Initialize a character variable with 'z' */

	while (ch >= 'a')
	{
		putchar(ch); /* Output the current character */
		--ch; /* Decrement the character to move to the previous letter */
	}

	putchar('\n'); /* Output a newline character to end the line */

	return (0); /* Return 0 to indicate successful execution */
}
