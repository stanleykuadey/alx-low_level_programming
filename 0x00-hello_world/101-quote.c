#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a given text using write
 * function to the standard error (stderr) stream.
 *
 * It does not use standard input/output functions like printf
 * or puts.
 *
 * Return: This program returns 1 to indicate an error or failure.
 */

int main(void)
{
	/**
	 * This line declares an array of characters named quo 
	 * and initializes it with a specific quote enclosed in
	 * double quotes.
	*/

	char quo[] = "nd that piece of art is useful" - Dora
		Korpar, 2015-10-19\n";

	/**
	 * This line uses the write function to write the contents
	 * of the quo array to the standard output (file descriptor 1).
	 * It specifies quo as the buffer to write, and 59 as the
	 * number of bytes to write, which corresponds to the length
	 * of the quote.
	*/

	write(1, quo, 59);
	return (1);
}
