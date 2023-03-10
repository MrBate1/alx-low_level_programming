#include "main.h"

/**
 *_strpbrk - searches a string for a set of bytes
 *@s: string
 *@accept: set of bytes
 *Return: if set = matched - a pointer to the matched byte
 *if not = NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
