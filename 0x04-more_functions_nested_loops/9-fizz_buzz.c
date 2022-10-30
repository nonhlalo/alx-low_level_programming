#include "main.h"
#include <stdio.h>

/**
 * main - print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int n;
	
	_printf("1");
	for (n = 2; n <= 100; n++)
	{
		_printf(" ");
		if (n % 3 == 0)
			_printf("fizz");
		if (n % 5 == 0)
			_printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			_printf("%d", n);
	}
	_printf('\n');

	return (0);
}
