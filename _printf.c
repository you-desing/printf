#include "main.h"
/**
  * _printf - function that produces output according to a format.
  * @format: format (char, string, int, decimal)
  * Return: size the output text;
  */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0, ct = 0;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
	if (format[i] == '%')
	{
		format++;
		if (format[i] == 'c')
		{
			ct += Pri_Char(ptr);
		}
		else if (format[i] == 's')
		{
			ct += Pri_String(ptr);
		}
		else if (format[i] == '%')
		{
			ct += _putchar('%');
		}
		else if (format[i] == 'd' || format[i] == 'i')
		{
			ct += Pri_int(ptr);
		}
		else
		{
			_putchar('%');
			if (format[i] == '\0')
				break;
			ct += _putchar(*format);
		}
	}
	else
		ct += _putchar(*format);
	format++;
	}
	va_end(ptr);
	return (ct);
}
