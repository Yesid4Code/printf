#include "holberton.h"

/**
 * print_binary - function that printthe inary number.
 * @arg: arguments from a list.
 * Return: int.
 */
int print_binary(va_list arg)
{
	int i, cout;
	int num = va_arg(arg, int);
	char k[1];
	int arraybin[32];

	i = cout = 0;
	while (num != 0)
	{
		arraybin[i] = num % 2;
		num = num / 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		k[0] = (arraybin[i] + 48);
		write(1, &k, 1);
		i--;
		cout++;
	}
	return (cout);
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

	printf("here I am");
	length = _strlen(s);
	_rot13(s);
	return (length);
}
