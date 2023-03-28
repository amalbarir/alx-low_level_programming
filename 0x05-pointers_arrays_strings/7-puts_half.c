#include "main.h"

/**
 * puts_half - a fucntion that print half of a string
 * @str: pointer variable
 * Return: void return nothing
 */

void puts_half(char *str)
{
	int len, i, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	else if (len  % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			putchar(str[n + 1]);
		}
	}
	putchar('\n');
}
