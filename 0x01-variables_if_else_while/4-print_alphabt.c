#include <stdio.h>

/**
 * main - Entry print lower case alphabet
 * followed by a new line except q and e
 * return: Always 0
 */
int main(void)

{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
