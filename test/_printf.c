#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	int char_printed = 0;

	if (format == NULL)
		return (-1);

	va_start(args,format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
			i++;
		if (format[i] == 'c')
		{
			_putchar(va_arg(args,int));
			char_printed++;
		}

		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
				if (str == NULL)
					return (-1);
		}
	}
	return (char_printed);
}

