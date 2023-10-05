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
	 /* Define a character array 'quo' to store the message to be printed */
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

/* Use the 'write' function to print the message in 'quo' to standard output (file descriptor 1) */
	write(1, quo, 59);
	return (1);}
	 /* Return the value '1' to indicate an error or abnormal termination */
