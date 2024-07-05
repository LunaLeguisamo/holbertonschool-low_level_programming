#include "main.h"
#include <stdlib.h>
#include "_strlen.c"

/**
 * string_nconcat - Concatenate two strings
 * @s1: Pointer to concatenate
 * @s2: Pointer to concatenate
 * @n: Number of bytes of s2
 * Return: On success, returns a pointer to the
 * new allocated space of memory. If memory
 * allocation fails return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int counter;
        unsigned int counter1;
        char *new_str;
        unsigned int lens1;
        unsigned int lens2;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        lens1 = _strlen(s1);
        lens2 = _strlen(s2);

        if (n >= lens2)
                n = lens2;

        new_str = malloc(lens1 + n + 1);

        if (new_str == NULL)
                return (NULL);

        for (counter = 0; counter <= lens1; counter++)
        {
                new_str[counter] = s1[counter];
        }

        for (counter1 = 0; counter1 < n; counter1++)
        {
                new_str[lens1 + counter1] = s2[counter1];
        }

        new_str[counter + counter1] = '\0';

        return (new_str);
}
