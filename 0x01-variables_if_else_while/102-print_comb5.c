#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Digits are in the format "XY", where X and Y are distinct.
 *
 * Return: Always 0 (Indicating that the program executed succesfully)
*/

int main(void)
{
	int firstDigit = 0; /* First digit */
	int secondDigit;

	while (firstDigit <= 99)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstDigit)
			{
				/* Print the first digit (X) */
				putchar((firstDigit / 10) + '0');
				putchar((firstDigit % 10) + '0');
				putchar(' ');

				/* Print the second digit (Y) */
				putchar((secondDigit / 10) + '0');
				putchar((secondDigit % 10) + '0');

				/* Add a comma and space if needed */
				if (firstDigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++secondDigit;
		}
		++firstDigit;
	}
	putchar('\n');

	return (0);
}
