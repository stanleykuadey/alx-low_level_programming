#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the size of various
 * types using the sizeof function
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	/* sizeof is a function that evaluates the size of a variable */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of long: %zu byte(s)\n", sizeof(long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of double: %zu byte(s)\n", sizeof(double));
	printf("Size of long double: %zu byte(s)\n", sizeof(long double));

	return (0);

}
