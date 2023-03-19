#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point
  *Description: print lowercase alphabet
  *Return: always 0
  */
int main(void)
{
	char i,z;
	i = 'a';
	z = 'z';

	while (i <= z)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
