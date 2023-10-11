#include "main.h"
#include <stdio.h> /* Includ the standard input/output library for
		      printf */

/**
 * print_to_98 - Print numbers from 'n' to 98, separated by a comma
 * and space.
 *
 * @n: The starting number.
 *
 * Description: This function prints numbers from the input 'n'
 * to 98, separated by a comma and space. The numbers are printed
 * ascending or descending order.
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = n; count > 98; --count)
		{
			printf("%d, ", count); /* Print numbers from
						  'n' to 99 */
		}
	}
	else
	{
		for (count = n; count < 98; ++count) /* Print numbers
							 from 'n' to 97 */
		{
			printf("%d, ", count); /* Print numbers from 'n'
						  to 97 */
		}
	}

	printf("98\n"); /* Print the final number (98) followed by a
			   new line */
}
