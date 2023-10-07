#include <stdio>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of two digits from 0 to 9, where the first digit is less than the
 * second digit. The combinations are separated by commas and spaces.
 *
 * Return: Always 0 (Indicating that the program executed successfully)
*/

int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1 + '0'); /* Output the first as a character */
				putchar(digit2 + '0'); /* Output the second digit as a character */

				if (digit1 + digit2 != 17)
				{
					putchar(','); /* Output a comman if the sum is not 17 */
					putchar(' '); /* Output a space after the comma */
				}
			}
			++digit2;
		}
		++digit1;
	}

	putchar('\n'); /* Output a newline characternto end the line */

	return (0); /* Return 0 to indicate successful execution */
}
