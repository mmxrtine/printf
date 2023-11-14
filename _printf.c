#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert x[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}
	};

	va_list arg;
	int a = 0, j,  length = 0;

	va_start (arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (x[j].cp[0] == format[a] && x[j].cp[1] == format[a + 1])
			{
				length += x[j].function(arg);
				a = a + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[a]);
		length++;
		a++;
	}
	va_end(arg);
	return (length);
}
