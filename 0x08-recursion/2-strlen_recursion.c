#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: The string to be measured
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	{
		if (*s == '\0')
			return (0);
		else
			return (1 + _strlen_recursion(s + 1));
	}
}
