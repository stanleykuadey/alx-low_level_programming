#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of two
 * digits. Digits must be in ascending order and not sum to 24.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	int digit1 = 0; /* First digit */
	int digit2, digit3;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			digit3 = 0;
			while (digit3 <= 9)
			{
				/* Check conditions for valid comabination */
				if (digit1 != digit2 &&
						digit1 < digit2 &&
						digit2 != digit3 &&
						digit2 < digit3)
				{
					/* Print the digits */
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(digit3 + '0');

					/* Add a comma and space if needed */
					if (digit1 + digit2 + digit3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++digit3;
			}
			++digit2;
		}
		++digit1;
	}
	putchar('\n');

	return (0);
}
