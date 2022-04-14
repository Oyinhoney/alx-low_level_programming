#include "main.h"

/**
 * print_numbers - prints the numbers zero to nine
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{

int i;

i = 0;

for (i = 0; i < 10; i++)

_putchar(i + '0');

_putchar ('\n');
}
