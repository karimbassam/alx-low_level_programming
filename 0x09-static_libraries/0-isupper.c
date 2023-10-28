#include "main.h"

/**
 * _isupper - check if the character is uppercase
 *
 * @ch: input alphabet
 *
 * Return: 1 if its uppercase and 0 otherwise
 */

int _isupper(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (1);
	else
		return (0);
}
