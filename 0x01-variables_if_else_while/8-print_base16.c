#include <stdio.h>
/**
* main - Entry point
* Description: 'checks the task
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, a, f;

	i = 0;
	a = 'a';
	f = 'f';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	
	while (a <= f)
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
