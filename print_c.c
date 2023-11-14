#include "main.h"
#include <stdarg.h>
/**
 * printf_char - prints char
 * @arg: arguments
 * return: 1
 */

int print_char(va_list arg)
{
	char str;

	str = va_arg(arg, int);
	_putchar(str);
	return (1);
}
