#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: reverse order of lower case
 * Return: 0
 */
int main(void)
{
        int i = 0;
	int n = 141;

	while(i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while(n <= 146)
        {
               putchar(n);
	       n++;
        }
	 putchar('\n');
	 return (0);
}
