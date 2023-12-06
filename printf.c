#include "main.h"
#include <stdarg.h>
/**
 *
 *
 *
 *
 **/
int _printf(const char *format, ...)
{
va_list args;
char ch;
va_start(args, format);
if (!format)
{
	return (-1);
}
if (format[0] == '%')
{
	if (format[1] == '%')
	{
		_putchar('%');
		return (0);
	}
	if (format[1] == 'c')
	{
		ch = va_arg(args, int);
		_putchar(ch);
		return (0);
	}
	if (format[1] == 's')
	{
		;
	}
	if (format[1] == 'r')
	{
		ch = format[1];
		_putchar(ch);
	}
}
return (0);
}
