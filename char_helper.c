#include "main.h"
/**
  * print_string - print string
  * @str - check for th string
  * @args: check for the arguments
  * Return: num of char printed
  */
int print_string(va_list args)
{
	char *str;
	int character_printed;

	str = va_arg(args, char *);
	character_printed = 0;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		character_printed++;
	}
	return (character_printed);
}
