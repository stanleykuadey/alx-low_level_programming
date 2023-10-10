#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Description: This function writes a single character 'c' to
 * the standard output (stdout).
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints the lowercase alphabet
 * in a single line.
*/
void print_alphabet(void);

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: THis function prints the lowercase alphabet 10 times, each on a new line.
*/
void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lowercase
 * @c: The character to check
 *
 * Description: This function checks if the input character
 * 'c' is lowercase.
 *
 * Return: 1 is 'c' is lowercase, 0 otherwise.
*/
int _islower(int c);

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check
 *
 * Description: This function checks if the input character 'c'
 * is alphabetic.
 *
 * Return: 1 if 'c' is alphabetic, 0 if otherwise.
*/
int _isalpha(int c);

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Description: This function prints the sign of the input number 'n'.
 *
 * Return: 1 if 'n' is positive, 0 if 'n' is zero, -1 if 'n' is
 * negative.
*/
int print_sign(int n);

/**
 * _abs - Computes the absolute value of an integer
 * @n: The niteger to compute the absolute value of.
 *
 * Description: This function computes and returns the absolute
 * of the input integer 'n'.
 *
 * Return: The absolute value of 'n'.
*/
int -abs(int n);

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Description - This function extracts and prints the last digit of
 * the input number 'n'.
 *
 * Return: The last digit of 'n'.
*/
int print_last_digit(int n);

/**
 * jack_bauer - Prints every minute of the day
 *
 * Description: This function prints every minute of the day in
 * the format "HH:MM".
*/
void jack_bauer(void);

/**
 * times_table - Prints the times table up to 9x9
 *
 * Description: This function prints the times table up to 9x9.
*/
void times_table(void);

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Description: This function adds two integers 'a' and 'b' and returns
 * the result.
 *
 * Return: The sum of 'a' and 'b'.
*/
int add(int a, int b);

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints numbers from 'n' to 98,
 * separated by commas
*/
void print_to_98(int n);

/**
 * print_times_table - Prints the times table up to a given value
 * @n: The value up to which the times table should be printed
 *
 * Description: This function prints the times table up to the
 * given value 'n'.
*/
void print_times_table(int n);

#endif /* MAIN_H */
