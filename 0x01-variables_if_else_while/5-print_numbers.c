#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point
  *Description: prints all single digit numbers of base 10 starting from 0
  *Return: always 0
  */
int main(void)
{
	int i = 0;

	while (i<10)
		printf("%d",i++,'\n');
	return (0);
}
