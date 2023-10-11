#include "main.h"

/**
 * print_times_table - Print a multiplication table for a given number 'n'.
 *
 * @n: The number for which to generate the multiplication table.
 *
 * Description:
 * This function prints a multiplication table for the input number 'n' with
 * proper formatting. The table includes numbers from 0 to 'n' multiplied by
 * each other.
 */
void print_times_table(int n)
{
    int row, column, product;

    if (n >= 0 && n <= 15)
    {
        for (row = 0; row <= n; ++row)
        {
            _putchar('0'); /* Print the first element of each row */
            
            for (column = 1; column <= n; ++column)
            {
                _putchar(',');
                _putchar(' ');

                product = row * column;

                if (product <= 9)
                {
                    _putchar(' '); /* Print extra space for single-digit numbers */
                    _putchar(' '); /* Additional space */
                }
                else if (product <= 99)
                {
                    _putchar(' '); /* Extra space for two-digit numbers */
                }

                /* Print the product of row and column */
                _putchar((product / 100) + '0'); /* Hundreds digit */
                _putchar(((product / 10) % 10) + '0'); /* Tens digit */
                _putchar((product % 10) + '0'); /* Ones digit */
            }
            _putchar('\n'); /* Start a new line after each row */
        }
    }
}
