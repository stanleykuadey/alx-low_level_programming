#include "main.h" /* Include the "main.h" header using the correct path */
#include <stdio.h> /* Include the standard input/output library for printf */

/**
 * main - Entry point
 *
 * Description: This is the main function that checks the code.
 *
 * Return: Always 0 (Indicating success)
*/

int main(void)
{
	int n;

	n = add(89, 9); /* Call the add function from "main.h" */
	printf("%d\n", n); /* Print the result */
	return (0);
}
