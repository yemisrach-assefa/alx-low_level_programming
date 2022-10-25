#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Discription: A function that prints
 * Return: none
 */
void print_alphabet(void)
{
	int i;

	for(i = 97; i <=122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
