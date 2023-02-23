#include "main.h"

/**
 *print_most_numbers- prints numbers 1 -9 execpt 2 and 4
 *@i: integer variable
 *Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}

		i++;
	}
	_putchar('\n');
}
