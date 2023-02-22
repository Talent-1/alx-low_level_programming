#include "main.h"

/**
 * main - prints alphabet in lower case and a new line
 * Return: always 1
*/
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);

	_putchar('\n');

	return (1);
}
