#include "main.h"

/**
 *_strchr - finds char in string
 *@s: string
 *@c: char
 *Return: If c is found then returns pointer to where is found first,if not found return 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
