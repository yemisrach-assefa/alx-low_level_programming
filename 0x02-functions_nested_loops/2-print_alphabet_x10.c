#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet function
 *
 * Discription: print 10 times lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
		 putchar('\n');

	}
}
