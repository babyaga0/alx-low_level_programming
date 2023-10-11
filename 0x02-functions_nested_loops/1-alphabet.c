#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase ,followed by \n
 * 
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	putchar('\n');
}
