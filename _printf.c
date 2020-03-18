#include "holberton.h"

/**
 * get_format - function that produces output according to a format.
 * @s: string to be printed
 * Return: length of string
 */
int (*get_format(char s))(va_list)
{
	int i;
	f_type listf[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_decimal},
		{"r", print_reverse},
		{"R", print_rot13},
		{"b", print_binary},
		{NULL, NULL}
	};
	for (i = 0; listf[i].ftype != NULL; i++)
	{
		if (listf[i].ftype[0] == s)
		{
			return (listf[i].funty);
		}
	}
	return (NULL);

}
/**
 * _printf - function that produces output according to a format.
 * @format: string to be printed
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int (*f)(va_list);
	int i, length;

	i = length = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg, format);
	while (format[i] && format)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				f = get_format(format[i + 1]);
				if (f)
					length = length + f(arg), i++;
				else
				{
					write(1, &format[i], 1);
					length++;
				}
			}
			else
			{
				write(1, &format[i], 1);
				length++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			length++;
		}
		i++;
	}
		va_end(arg);
		return (length);
}
