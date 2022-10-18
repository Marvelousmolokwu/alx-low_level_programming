#include "main.h"
/**
 * print_last _digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int id = n % 10;

	if (id < 0)
		id += -1;
	_putchar(id + '0');

	return (0);
}
