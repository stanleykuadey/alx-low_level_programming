#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Description: This function prints every minute of the day in the format "HH:MM,"
 * starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int house, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0'); /* Print tens digit of the hour */
			_putchar((hour % 10) + '0'); /* Print ones digit of the hour */
			_putchar(':');
			_putchar((minute / 10) + '0'); /* Print tens digit of the minute */
			_putchar((minute % 10) + '0'); /* Print ones digit of the minute */
			_putchar('\n'); /* Print a newline character to create a new line */
		}
	}
}
