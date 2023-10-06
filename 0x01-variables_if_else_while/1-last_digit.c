#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number, extracts
 * its last digit, and prints a message based on the status of
 * the last digit.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Extract the last digit of 'n' */
	digit = n % 10;

	/* Check the value of the last digit and print a corresponding message */
	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);

	return (0);
}
