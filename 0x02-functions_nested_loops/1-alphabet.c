#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 *
 * Description: This function uses the custom function _putchar
 * to print the lowercase alphabet from 'a' to 'z' followed by a
 * newline character.
*/

void print_alphabet(void)
{
	int ch;

	/* Loop through each character from 'a' to 'z' */
	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		_putchar(ch); /* Call _putchar to print the current
			       * character
			      */
	}

	_putchar('\n'); /* Print a newline character to create a
			 * new line
			*/
}
