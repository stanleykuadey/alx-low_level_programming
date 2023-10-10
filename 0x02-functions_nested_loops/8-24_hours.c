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
	int min, hr:

	for (hr = 0; hr <= 23; ++hr)
	{
		for (min = 0; min <= 59; ++min)
		{
			_putchar((hr / 10) + 48); /* Print tens digit of the hour */
			_putchar((hr % 10) + 48); /* Print ones digit of the hour */
			_putchar(':');
			_putchar((min / 10) + 48); /* Print tens digit of the minute */
			_putchar((min % 10) + 48); /* Print ones digit of the minute */
			_putchar('\n'); /* Print a newline character to create a new line */
		}
	}
}
