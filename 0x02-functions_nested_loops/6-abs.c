#include <stdio.h>
#include "main.h"
/**
 * _abs - a function that displays absolute function
 * @r: parameter
 *
 * Discription: function that displays absolute function
 * Return: 0
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
