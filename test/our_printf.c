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
	char *str;
	int char_printed = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{	i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
				char_printed++;
			}
			else if (format[i] == 's')
			{

					str = va_arg(args, char *);
					if (str == NULL)
						return 0;
					while (*str)
					{
						_putchar(*str);
						char_printed++;
						str++;
					}
		}


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
		else
		{
			_putchar(format[i]);
			char_printed++;
		}
		i++;
	}

	va_end(args);
	return (char_printed);
}
