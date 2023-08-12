#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: Print alphabet in lowercase then uppercase
 *
 * Return: 0 (success)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
putchar('\n');

return (0);
}
