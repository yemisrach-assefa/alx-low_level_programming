#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: change into lowercase
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
