#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * Description:
 * This program prints the alphabet in lowercase followed by uppercase letters,
 * from 'a' to 'z' and 'A' to 'Z'.
 *
 * Return:
 * Always 0 (Indicating that the code executed successfully)
*/

int main(void) /* Entry point of the program */
{
	char ch = 'a'; /* Initialize a character variable for lowercase 'a' */
	char CH = 'A'; /* Initialize a character variable for uppercase 'A' */

	/* Print lowercase alphabet */
	while (ch <= 'z')
	{
		putchar(ch); /* Output the current lowercase character */
		++ch;        /* Move to the next lowercase character */
	}

	/* Print uppercase alphabet */
	while (CH <= 'Z')
	{
		putchar(CH); /* Output the current uppercase character */
		++CH;        /* Move to the next uppercase character */
	}

	putchar('\n'); /* Print a newline character to end the line */

	return (0);
}
