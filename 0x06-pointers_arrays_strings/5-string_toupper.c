#include "main.h"
#include <ctype.h>
/**
 * string_toupper - chamges all lowercase of a string to uppercase
 * @str: the pointer to the string
 * Return: return a pointer to the string
 */
char *string_toupper(char *str)
{
	/* char *hold = str; */

	while (*str != '\0')
	{
		*str = toupper(*str);
		(str)++;
	};
	return (str);
}
