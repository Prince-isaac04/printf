#include "main.h"

int _printf(const char *format, ...) {
	int count = 0;
	va_list set;
	va_start(set, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						char c = va_arg(set, int);
						_putchar(c);
						count++;
						break;
					}
				case 's':
					{
						/* string specifier */
						char *str = va_arg(set, char *);
						while (*str)
						{
							_putchar(*str);
							str++;
							count++;
							break;
						}

					}
				case '%':
					{
						_putchar('%');
						count++;
						break;
					}
			}
		} else {
			/* Ordinary character, not a specifier*/
			putchar(*format);
			count++;
		}

		format++;
	}

	va_end(set);

	return (count);
}
