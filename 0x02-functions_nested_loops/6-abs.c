#include "main.h"

/**
 * _abs - prints the alphabet in lowercase
 * @a: the variable
 * Return: void
 */

int _abs(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n);
	}
	else 
        {
		_putchar(n);
	}
    
	return (1);
}
