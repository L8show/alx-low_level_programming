#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - asdasdasdasdadasd
 *
 * @n: asdasdasdasdasda
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

