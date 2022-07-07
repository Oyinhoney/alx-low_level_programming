#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fnd(char buffer[])
{
	if (buffer[0] != buffer[5])
		return (0);
	else if (buffer[1] != buffer[4])
		return (0);
	else if (buffer[2] != buffer[3])
		return (0);
	else
		return (1);
}

void findpa(void)
{
	int a = 999;
	int b = 999;
	int c = 1;
	char buffer[7];
	int d;
	int flag = 1;
	while (a > 0)

	{
	c = a * b;
	snprintf(buffer, 7, "%d", c);
	d = fnd(buffer);
	if (d == 1)
	{
		printf("%d * %d = %s\n", a, b, buffer);
		printf("____%s___\n", buffer);
	}
	b = b - 1;
	if (b == 99)
	{
		b = 999;
		flag++;
	}
	if (flag % 2 == 0)
		a = a - 1;
	flag = 1;
	}
}
int main(void)
{


	findpa();
	return (0);
}
