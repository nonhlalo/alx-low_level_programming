#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial
 * Return: factorial n (n > 0), else indicate error (n < 0 - 1)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
