#include "main.h"
/**
 * Pri_Char - writes the string
 * @c: The character to print
 * Return: return 1
*/
int Pri_Char(va_list c)
{
	char ch;

	ch = va_arg(c, int);
	_putchar(ch);
	return (1);
}
/**
 * Pri_String - writes the string
 * @s: The character to print
 * Return: return number the character
*/
int Pri_String(va_list s)
{
	char *my_s;
	int  c = 0;

	my_s = va_arg(s, char *);
		if (my_s != NULL)
		{
			while (*my_s != '\0')
			{
				_putchar(*my_s);
				my_s++;
				c++;
			}
		}
		else
		{
			char *null_s = "(null)";

			while (*null_s != '\0')
			{
				_putchar(*null_s);
				null_s++;
				c++;
			}
		}
		return (c);
}
/**
 * Pri_int - writes the integer
 * @i: The number to print
 * Return: return num
*/
int Pri_int(va_list i)
{
	int divs = 1;
	int ct = 0;
	unsigned int num = va_arg(i, unsigned int);

	if (num != 0)
	{
		if (num == INT_MIN)
		{
			_putchar('-');
			 num = (-1) * num;
		}
		else if (num < 0)
		{
			_putchar('-');
			num = (-1) * num;
		}
		while (num / divs > 9)
		{
			divs = divs * 10;
		}
		while (divs > 0)
		{
			_putchar(48 + num / divs);
			num = num % divs;
			divs = divs / 10;
			ct++;
		}
	}
	else
	{
		_putchar(48);
		ct++;
	}
	return (ct);
}
