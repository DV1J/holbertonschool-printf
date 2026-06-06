#include "main.h"
/**
 *_printf - function that produces output according to a format.
 *@format: check for format character
 *Return:NULL || Num of characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int character_printed = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
				return (-1);
			if (format[i] == 'c')
				character_printed += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				character_printed += print_string(args);
			else if (format[i] == 'd' || format[i] == 'i')
				character_printed += print_number(va_arg(args,int));
			else if (format[i] == '%')
				character_printed += _putchar('%');
			else
			{
				_putchar('%');
				_putchar(format[i]);
				character_printed += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			character_printed++;
		}
	}
	va_end(args);
	return (character_printed);
}
