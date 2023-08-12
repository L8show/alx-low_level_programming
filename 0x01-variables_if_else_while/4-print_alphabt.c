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
	char ch = 'a';

	while (ch <= 'z')
{
	if (ch == 'e' || ch == 'q')
		ch++;
	putchar(ch);
	ch++;
}
putchar('\n');

return (0);
}
