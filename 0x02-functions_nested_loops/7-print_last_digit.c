#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - function that prints last digit
 * @r: parameter
 *
 * Discription: prints the last digit of a number
 * Return: 0
 */
int print_last_digit(int r)
{
	int i;

	if (r >= 0)
	{
		i = r % 10;
	}
	else
	{
		i = (r * -1) % 10;
	}
	_putchar(i + '0');
	return (i);
}
