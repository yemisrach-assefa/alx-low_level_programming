#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural number upto 98
 *
 * Discription: prints all natural number upto 98
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
                        {
                                printf("%d,", i);
                        }
                        else
                        {
                                printf("%d", i);
                        }

		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
                   		printf("%d,", i);
                	}
			else
			{
				printf("%d", i);
			}	
		}
	}
	printf("\n");
}
