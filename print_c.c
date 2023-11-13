#include "main.h"

/**
 * printf_char - prints char
 * @arg: arguments
 * return: 1
 */

int printf_char(va_list arg)
{
	char str;

	str = va_arg(arg, int);
	_putchar(str);
	return (1);
}
