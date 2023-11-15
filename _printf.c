#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
* _printf - function to print
* format: first arguement
* return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list args;
	
	if (format == NULL)
	{
		return (-1);
	}
	va_start (args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_print++;
		}
		else /* if format is the % sign */
		{
			format++; /* skip & sign */
			if (*format == '\0')
			{	 
				break;
			}
			if (*format == '%')
			{
				write(1, format, 1); 
				char_print++;
			}
			else if (*format == 'c')
			{
				char c = (char)va_arg (args, int);
				write(1, &c, 1);
				char_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
	
				write(1, str, str_len);
				char_print += str_len;
			}
			else if (*format == 'd')
			{
				int num = va_arg(args, int);
                		int num_len = 0;
                		int temp = num;

				if (temp <= 0) 
				{
                    			num_len = 1;
				}
			
				while (temp != 0)
				{
					temp /= 10;
					num_len++;
				}	
		
				if (num < 0)
				{
					write(1, "-", 1);
					char_print++;
					num = -num;
				}

				while (num_len > 0)
				{
					int digit = (num / num_len) % 10 + '0';
					write (1, &digit, 1);
					char_print++;
					num_len--;
				}
			}
		}
		
		format++;
	}
	
	va_end(args);
	return (char_print);	
}

