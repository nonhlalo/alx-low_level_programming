#include "main.h"

/**
 * _islower - check if a character is lowcase
 * @c:character
 * Description: Done
 * Return 1 if it is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

