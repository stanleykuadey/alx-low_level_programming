#include "main.h"

/**
 * _islower - Check if a character is lowercase.
 *
 * @c: The character to check.
 *
 * Description: This function checks whether the inut character 'c'
 * is lowercase.
 *
 * Return: 1 if 'c' is lowercase, 0 otherwise (Indicating success)
*/

int _islower(int c)
{
	/* Check if 'c' is within the ASCII range of lowercase letters (97-122) */
	if (c >= 97 && c <= 122)
	{
		return (1); /* 'c' is lowercase */
	}

	return (0); /* 'c' is not lowercase */
}
