#include "holberton.h"

/**
 * print_binary - function that printthe inary number.
 * @arg: arguments from a list.
 * Return: int.
 */
int print_binary(va_list arg)
{
	unsigned int num[32];
	unsigned int i, val, number, count = 0;
	int j = 0;
	char buf[1];


	number = va_arg(arg, unsigned int);
	val = 2147483648;
	num[0] = number / val;

	for (i = 1; i < 32; i++)
	{
		val = val / 2;
		num[i] = (number / val) % 2;
	}
	for (i = 0; i < 32; i++)
	{
		count += num[i];
		if (count != 0 || i == 31)
		{
			buf[0] = (num[i] + 48);
			write(1, buf, 1);
			j++;
		}
	}
	return (j);
}

/**
 * print_reverse - function that print the reverse.
 * @arg: arguments from a list.
 * Return: int.
 */
int print_reverse(va_list arg)
{
	int length = 0;
	char *s = va_arg(arg, char *);

	length = _strlen(s);

	if (s == NULL)
	{
		s = "(null)";
		return (1);
	}
	if (s == '\0')
	{
		return (-1);
	}
	rev_string(s);
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
	return (length);
}

/**
 * print_rot13 - function that print the string in reverse.
 * @arg: arguments from a list.
 * Return: int.
 */
int print_rot13(va_list arg)
{
	int length = 0;
	char *s = va_arg(arg, char *);

	if (s)
	{
		length = _strlen(s);
		_rot13(s);
	}
	else
	{
		return (-1);
	}
	return (length);
}
