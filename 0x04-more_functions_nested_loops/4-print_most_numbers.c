#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - sadasda dadsads
*/

void print_most_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');


}
