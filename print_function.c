#include "holberton.h"
/**
 *print_char - prints a character
 * @arg: character to print
 *
 * Return: length of char
 */
int print_char(va_list arg)
{
	char s = va_arg(arg, int);

	write(1, &s, 1);
	return (1);
}

/**
 *print_string - prints a string
 * @arg: string to print
 * Return: length of string
 */
int print_string(va_list arg)
{
	int i = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		i++;
	}

	return (i);
}
/**
 *print_int - prints a number positive or negative
 * @arg: int to print
 * Return: length of int
 */
int print_int(va_list arg)
{
	int num[10];
	int i, number, j = 0, cont = 0;
	int val = 1000000000;
	char buf[1];

	number = va_arg(arg, int);
	num[0] = number / val;

	for (i = 1; i < 10; i++)
	{
		val = val / 10;
		num[i] = ((number / val) % 10);
	}
	if (number < 0)
	{
		write(1, "-", 1);
		j = j + 1;
		for (i = 0; i < 10; i++)
		{
			num[i] = num[i] * -1;
		}
	}
	for (i = 0; i < 10; i++)
	{
		cont = cont + num[i];
		if (cont != 0 || i == 9)
		{
			buf[0] = (num[i] + 48);
			write(1, buf, 1);
			j++;
		}
	}
	return (j);


}

/**
 *print_decimal - prints a number base decimal
 * @arg: number
 *
 * Return: length of number
 */
int print_decimal(va_list arg)
{
	int num[10];
	int i, number, j = 0, cont = 0;
	int val = 1000000000;
	char buf[1];

	number = va_arg(arg, int);
	num[0] = number / val;

	for (i = 1; i < 10; i++)
	{
		val = val / 10;
		num[i] = ((number / val) % 10);
	}
	if (number < 0)
	{
		write(1, "-", 1);
		j = j + 1;
		for (i = 0; i < 10; i++)
		{
			num[i] = num[i] * -1;
		}
	}
	for (i = 0; i < 10; i++)
	{
		cont = cont + num[i];
		if (cont != 0 || i == 9)
		{
			buf[0] = (num[i] + 48);
			write(1, buf, 1);
			j++;
		}
	}
	return (j);


}
