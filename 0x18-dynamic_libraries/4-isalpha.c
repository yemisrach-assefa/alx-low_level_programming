#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function to alowercase
 * @c: parameter
 *
 * Discription: checks for alphabetic character.
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
