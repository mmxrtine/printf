#ifndef MAIN_H
#define MAIN_H

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */
typedef struct format
{
	char *cp;
	int (*function) ();
} convert;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_str(va_list arg);
int _strlen(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_d(va_list args);
int print_i(va_list args);
#endif
