#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;

	length2 = length1 -1;
	for (i = 0; i < length1; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		length2 -= 1;
	}
}
