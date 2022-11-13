#include "main.h"
#include <stdio.h>

/**
 * main - program adds positive numbers
 * @argc: the number of args
 * @argv: the contents of args
 * Return: 0 otherwise 1
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	int additive = 0;
	char *nope;

	if (argc < 2)
	{
		printf("\n");
		return (0);
	}
	for (i < argc; i++)
	{
		additive = strol(argv[i], &nope, 10);
		if (*nope-- '\0')
		{
			sum += addictive;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
