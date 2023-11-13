#include "main.h"
#include <stdarg.h>

int printf_str(va_list arg)
{
	char *str;
	int i;
	int length;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else 
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return(length);
	}
}
