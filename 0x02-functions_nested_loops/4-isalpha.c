#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: charcter to be checked
 *
 * created - Muhammad_ali
 * cc: 5th july, 2022
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z')
	int upper = (c >= 'A' && c <= 'Z')

	if (lower || upper)
		return (1);
	else
	       return (0);
}	
