#include <stdio.h>
#include "main.h"

/**
 *_isupper- checks to see if a character is upper or lower case
 *@c: is a carrier integer varaible
 *Return: if upper returns 1, if lower returns 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
