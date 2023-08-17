#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - asdasdasdasdadasd
 *
 * @n: asdasdasdasdasda
*/

void print_diagonal(int n)
{
	int dc, marv;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dc = 1; dc <= n; dc++)
		{
			for (marv = 1; marv <= dc; marv++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}


