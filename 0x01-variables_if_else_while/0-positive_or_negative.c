#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: A program to assign a random number to the variable n
 * each time it is executed; positive or negative.
 *
 * Return: Always 0 (Indicating that the program executed successfully
*/

int main(void) /* Entry point of the program - 'main' function */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Check the value of 'n' and print a corresponding message */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
