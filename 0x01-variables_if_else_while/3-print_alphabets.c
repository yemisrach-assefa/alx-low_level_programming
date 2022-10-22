#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: upperletter and lowerletter
 * Return: 0
 */

int main(void)
{
	int i = 122 ;

	while (i >= 65)
	{
		if ((i < 91) || (i > 96))
			putchar(i);
		i--;
	}
	putchar('\n');
	return (0);

}
