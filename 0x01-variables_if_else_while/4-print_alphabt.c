#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all alphabet letters in lowercase
 * except for 'q' and 'e'.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	char ch = 'a'; /* Initialize a character variable with 'a' */

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q') /* Check if the character is 'e' or 'q' */
		{
			++ch; /* Increment the character to skip 'e' or 'q' */
			continue; /* Continue to the next iteration of the loop */
		}

		putchar(ch); /* Output the current character */
		++ch; /* Increment the character to move to the next letter */
	}

	putchar('\n'); /* Print a newline character to end the line */

	return (0); /* Return 0 to indicater successful execution */
}
