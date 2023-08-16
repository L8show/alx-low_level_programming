#include"main.h"

/**
 * jack_bauer - adasdadsadasdasdd 10 ajhkl
*/

void jack_bauer(void)
{
	int hr, min;

			for (min = 0; min <= 59; min++)
			{
			for (hr = 0; hr <= 23; hr++)
			{
				_putchar((hr / 10) + 48);
				_putchar((hr % 10) + 48);
				_putchar(':');
				_putchar((min / 10) + 48);
				_putchar((min % 10) + 48);
				_putchar('\n');
			}
	}
}
