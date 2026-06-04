#include "main.h"
/**
  *print_char - print char
  *character - check for character
  *@args: check for arguments
  *Return: the char
  */
int print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	_putchar(character);
	return (1);
}
/**
  * print_string - print string
  * @str - check for th string
  * @args: check for the arguments
  * Return: num of char printed
  */
int print_string(va_list args)
{
	char *str;
	int chars_printed;

	str = va_arg(args, char *);
	chars_printed = 0;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		chars_printed++;
	}
	return (chars_printed);
}

