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
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
