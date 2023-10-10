#include "main.h"

/**
 * _isalpha - Checks if a character is a letter (lowercase or uppercase).
 *
 * @c: The character to check.
 *
 * Description: This function checks whether the input character 'c' is a
 * letter which can be either lowercase or uppercase.
 *
 * Return: 1 if 'c' is a letter, 0 otherwise (Indicating success)
*/

int _isalpha(int c)
{
	/*
	 * Check if 'c' is within the ASCII range of lowercase letters (97-122)
	 * or within the ASCII range of uppercase letters (65-90)
	*/
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1); /* 'c' is a letter */
	}

	return (0); /* 'c' is not a letter */
}
