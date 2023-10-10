#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Description: This function writes a single character 'c'
 * to the standard output (stdout)
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1)); /* Use the write system call to write
				     'c' to stdout */
}
