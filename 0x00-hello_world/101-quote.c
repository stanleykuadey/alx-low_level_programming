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
	/*The line below uses the write function to write a message to
	 * the standard error stream (stderr).
	 * '2 is the file descriptor for the standard error
	 * stream (stderr).
	*/

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return(1);
}
