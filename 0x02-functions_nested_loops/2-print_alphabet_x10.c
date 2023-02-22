#include "main.h"

/**
 * print_alphabet_x10 - printns alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char k;

	for (ten = 0; ten <= 9; ten++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);

		_putchar('\n');
	}
}
