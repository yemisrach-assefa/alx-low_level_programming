#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: reverse order of lower case
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
