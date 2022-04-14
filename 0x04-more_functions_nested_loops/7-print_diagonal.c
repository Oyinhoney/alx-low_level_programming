#include "main.h"

/**
 * print_diagonal - Prints diagonals
 * @n: limit
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 0; j < i; j++)
{
for (j = 0; j < i; j++)
{
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
