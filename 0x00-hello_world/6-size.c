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
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));

	return (0);

}
