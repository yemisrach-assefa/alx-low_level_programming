#include <stdio.h>
#include "main.h"
/**
 * _islower - changes to lower case
 * @c: inputchar
 *
 * Discription: select whether its lower case or upper case
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
