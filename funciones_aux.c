#include "holberton.h"

/**
 * _strlen -  returns the length of a string.
 *@s: char
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}

/**
 * _rot13 - function that encodes a string using rot13.
 * @c: pointer that bring a string.
 * Return: c
 */
void _rot13(char *c)
{
	int i, j;
	char ch[1];
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = alpha13[j];
				ch[0] = (c[i] + 48);
				write(1, &ch, 1);
				break;
			}
		}
	}
}

/**
 * rev_string - prints a string reverse
 * @s: value
 */
void rev_string(char *s)
{
	int i, j;
	char p;

	j = 0;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = (i - 1); i > j; i--)
	{
		p = s[j];
		s[j] = s[i];
		s[i] = p;
		j++;
	}
}
