#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int counter;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		counter = 0;

		if (haystack[counter] == needle[counter])
		{
			do {
				if (needle[counter + 1] == '\0')
					return (haystack);

				counter++;

			} while (haystack[counter] == needle[counter]);
		}

		haystack++;
	}

	return ('\0');
}
