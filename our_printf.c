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
	int char_printed = 0;

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
				char_printed += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				char_printed += print_string(args);
			else if (format[i] == '%')
			{
				_putchar('%');
				char_printed++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				char_printed += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			char_printed++;
		}
	}
	va_end(args);
	return (char_printed);
}
