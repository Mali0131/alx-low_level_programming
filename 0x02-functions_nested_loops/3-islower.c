#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: the character to be checked
 *
 * created: Muhammad_ali
 * cc: 5th july, 2022
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
