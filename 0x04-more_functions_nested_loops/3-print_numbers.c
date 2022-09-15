#include <stdio.h>
#include "main.h"
/**
 * print_numbers -  a function that prints the numbers
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		printf("value of a: %d\n", i);
	}
	return (0);
}
