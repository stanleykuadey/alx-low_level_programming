#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 *
 * Description: This function utilizes the custome function _putchar
 * to print the lowercase alphabet from 'a' to 'z' ten times, each
 * time on a new line.
*/

void print_alphabet_x10(void)
{
	int line, ch; /* Declare integer variables for loop control */

	/* Loop to print the alphabet ten times */
	for (line = 0; line <= 9; ++line)
	{
		/* Loop through each character from 'a' to 'z' */
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch); /* Call _putchar to print the
				       * current character
				      */
		}
		
		_putchar('\n'); /* Print a newline character to create
				 * a new line
				*/
	}
}
