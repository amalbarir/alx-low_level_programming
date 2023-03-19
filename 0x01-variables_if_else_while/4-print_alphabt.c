#include <stdio.h>
/**
  *main - entry point
  *Description: print lowercase alphabet q e
  *Return: always 0
  */
int main(void)
{
	int a , z;

	a = 'a';
	z = 'z';

	while (a <= z)
	{
		if (a == 'q' || a == 'e')
			a++;
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
