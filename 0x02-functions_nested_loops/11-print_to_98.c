#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int t, o;

	if (n <= 98)
	{
		for (t = n; t <= 98; t++)
		{
			if (t != 98)
				printf("%d, ", t);
			else if (t == 98)
				printf("%d\n", t);
		}
	} else if (n >= 98)
	{
		for (o = n; o >= 98; o--)
		{
			if (o != 98)
				printf("%d, ", o);
			else if (o == 98)
				printf("%d\n", o);
		}
	}
}
