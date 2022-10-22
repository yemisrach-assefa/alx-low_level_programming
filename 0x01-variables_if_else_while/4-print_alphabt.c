#include <stdio.h>
/**
 * main - entry point
 *
 * Discription: lowercase except q and e
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if ((i == 101 || i == 113))
		{
			++i;
		}
		 putchar (i);
		 i++;
	}
	putchar('\n');
	return (0);
}
