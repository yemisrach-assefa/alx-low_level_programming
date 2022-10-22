#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: one digit of a number
 * Return:0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
