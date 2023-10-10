#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints each character of the
 * string "_putchar" using the custom function _putchar, followed
 * by a newline character.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	char str[] = "_putchar"; /* Declare and initialize a
				   * character array with "_putchar"
				    */
	int ch; /* Declare an integer variable for loop control */

	/* Loop through each character in the 'str' array */
	for (ch = 0; ch < 8; ++ch)
	{
		_putchar(str[ch]); /* Call the _putchar function
				    * to print the current character
				     */
	}

	_putchar('\n'); /* Print a newline character to create a
			 * new line
			   */

	return (0); /* Return 0 to indicate successful program
		     * execution
		       */
}
