#include <unistd.h>

/**
 * _putchar - writes characte c in stdout
 * @c: the character to print
 * Return: on success 1 otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
