#include "main.h"

/**
 * _strlen - length of a string
 * @s:input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int 1 = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (1);
}

/**
 * str_concat - Concat 2 strings.
 * @s1: string
 * @s2: string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int 11, 12;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	else
		11 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		12 = _strlen(s2);

	con = malloc(11 + 12 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (conc);
}
