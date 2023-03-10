#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: If str1<str2 then -,if str1>str2 then +,if == then 0
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
