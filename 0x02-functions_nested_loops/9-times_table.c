#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Description: This function prints the 9 times table in a
 * specific format. It uses nested loops to calculate and
 * format the table.
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48); /* Print the first digit '0'
			       * before the table.
			      */

		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(','); /* Print a comma and
					* space before each
					* product.
					*/
			_putchar(' ');

			prod = num * mult;

			/* Format the product for printing */
			if (prod <= 9)
				_putchar(' '); /* Put a space
						* for single-digit
						* products.
						*/
			else
				_putchar((prod / 10) + 48); /* Print the
							     * first digit.
							    */
			_putchar((prod % 10) + 48); /* Print the second digit */
		}
		_putchar ('\n'); /* Move to the next line after
				  * each row of the table.
				  */
	}
}
