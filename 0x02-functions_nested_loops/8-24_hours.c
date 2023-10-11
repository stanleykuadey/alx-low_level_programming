#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Description: This function prints every minute of the day
 * from 00:00 to 23:59 in the "HH:MM" format, where HH represents
 * the hour and MM represents the minute.
*/

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
	{
	for (c = 0; c <= 5; c++)
	{
	for (d = 0; d <= 9; d++)
	{
		_putchar(a + '0'); /* Print tens digit of the hour */
		_putchar(b + '0'); /* Print ones digit of the hour */
		_putchar(58);
		_putchar(c + '0'); /* Print tens digit of the minute */
		_putchar(d + '0'); /* Print ones digit of the minute */
		_putchar('\n'); /* Print a newline character to create a new line */
	}
	}
	}
	}
	}
}
