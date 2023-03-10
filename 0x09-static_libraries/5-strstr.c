#include "main.h"

/**
 *_strstr - finds a substring
 *@haystack: string
 *@needle: substring to be found
 *Return: if found a pointer to the beginningof the located substring
 *If not - null
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
