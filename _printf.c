#include "main.h"

/**
 * demoprint - A custom printf-like function.
 * @format: The format string.
 * @...: The variable number of arguments to print based on the format string.
 * This function emulates the behavior of printf. It takes a format string and a
 * variable number of arguments and prints formatted output to stdout based on
 * the format specifiers in the format string.
 * Return: The total number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list set;
	int i = 0;
	int ncount = 0;

	va_start(set, format);
	if (format == NULL || (format[i] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[i] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	if (!format)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c' || format[i] == 'd' || format[i] == 's' || format[i] == 'i')
			{
				ncount += pick(format[i])(set);
			}
			else if (format[i] == '%')
			{
				_output('%');
				ncount++;
			}
			else
			{
				ncount += _output('%');
				ncount += _output(format[i]);
			}
		}
		else
		{
			ncount += _output(format[i]);
		}
	}
	va_end(set);
	return (ncount);
}
