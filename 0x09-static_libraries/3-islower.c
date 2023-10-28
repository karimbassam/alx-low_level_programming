#include "main.h"

/**
 * _islower - check if character is lowercase
 *
 * @ch: character passed to function as parameter to be checked
 *
 * Return: returns 1 if c is lowercase otherwise 0 succerss
 */

int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (1);
	return (0);
}
