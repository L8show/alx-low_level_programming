#include"main.h"

/**
 * print_last_digit - adasdadsadasdasdd 10 adads
 *
 * @n: adasdasdasd
 *
 * Return: lastdigit
*/
int print_last_digit(int n)
{
	int lastdigit;

	if (lastdigit < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}

