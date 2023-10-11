#include "main.h"

/**
 * print - Prints 10 times the alphabet, in lowercases
*/

void print_alphabet_x10(void)
{
	int so = 0;
	char alpha;

	while (so++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
