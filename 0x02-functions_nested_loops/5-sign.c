#include "main.h"


/**
 * print_sign - print the sign of a number
 * @n: the number of a sign to be printed
 * Description: Done
 * Return: 1 if number is greater than zero
 * 0 if number is zero
 * -1 if number if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
