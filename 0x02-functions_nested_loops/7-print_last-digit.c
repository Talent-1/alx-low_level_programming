#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @j: the number
 * Return: value of the last digit
 */
int print_last_digit(int j)
{
	int l = j % 10;

	if (l < 0)
		l *= -1;

	_putchar(l + '0');

	return (0);
}
