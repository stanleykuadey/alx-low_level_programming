#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all lowercase alphabet letters from
 * 'a' to 'z' using a while loop and the putchat function.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/
int main(void)
{
	char ch = 'a';

	/* Loop through the alphabet from 'a' to 'az' */
	while (ch <= 'z')
	{
		/* Print the current character */
		putchar(ch);
		/* Move to the next character in the alphabet */
		++ch;
	}

	/* Print a newline character to end the output */
	putchar('\n')

		return (0);
}
