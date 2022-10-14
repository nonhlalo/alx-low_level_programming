#include <stdio.h>
/**
 * main - Entry point
 *
 * description: program that prints the alphabet in lowercase, followed by a new line
 * return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar("\n");
	return (0);
}
