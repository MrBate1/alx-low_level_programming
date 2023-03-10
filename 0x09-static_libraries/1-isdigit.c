#include <stdio.h>
#include "main.h"

/**
 *_isdigit- checks to see if a character is a digit or a letter
 *@c: is a carrier integer variable
 *Return: if digit reutns 1, if character returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
