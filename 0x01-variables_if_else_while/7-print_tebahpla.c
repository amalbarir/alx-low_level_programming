#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point
  *Description: print lowercase alphabet
  *Return: always 0
  */
int main(void)
{
	char z, a;

	z = 'z';
	a = 'a';

	while (z >= a)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
