#include "main.h"

/**
 * numLenght - asdasdadsad
 *
 * @num: asflasl;d
 *
 * Return: asdasdas
*/

int numLenght(int num)
{
	int lenght = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		lenght += 1;
	}
	return (lenght);
}

/**
 * main - asdadsadssa
 *
 * Description: asdasdasdads
 *
 * Return: adkasldka
*/

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;
