#include "main.h"

/**
 * _isalpha - checks if the character is a letter either uppercase or lowercase
 *
 * @ch: charcater to get checked by function
 *
 * Return: 1 if letter 0 otherwise success
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}
