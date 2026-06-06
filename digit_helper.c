#include "main.h"
/**
 * print_number - print the num
 *@num: number
 *Return:return count
 */
int print_number(int num)
{
	int div = 1;
	int character_printed = 0;
	unsigned int n;
	if (num < 0)
	{
		character_printed += _putchar('-');
		n = -num;
	}
	else
	{
		n = num;
	}
	while (n / div >= 10)
		div *= 10;
	while (div > 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
	return (character_printed);
}
