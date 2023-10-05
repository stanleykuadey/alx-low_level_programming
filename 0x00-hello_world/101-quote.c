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
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, 59);  /* Write the message to stderr */
    return 1;  /* Return 1 to indicate an error */
}

