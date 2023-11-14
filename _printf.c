#include "main.h"

#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert x[] = {
		{"%s", print_str}, {"%c", print_c},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}
	};

	va_list arg;
	int a = 0; j, length = 0;

	va_start (arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (a[j].cp[0] == format[i] && p[j].cp[1] == format[i + 1])
			{
				length += x[j].function(arg);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(arg);
	return (length);
}
