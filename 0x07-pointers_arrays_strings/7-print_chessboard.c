#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int indx1, indx21;

	for (indx1 = 0; a[indx1][7]; indx1++)
	{
		for (indx21 = 0; indx21 < 8; indx21++)
			_putchar(a[indx1][indx21]);

		_putchar('\n');
	}
}
