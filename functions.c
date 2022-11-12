#include "main.h"
/**
 * print_char - prints a character
 * @list: list
 * Return: 1
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * print_string - prints a string
 * @list: list
 * Return: i
 */
int print_string(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
/**
 *print_percent - print percent
 *@list: argument
 * Return: 1
 */
int print_percent(__attribute__((unused))va_list list)
{

	_putchar('%');
	return (1);
}

/**
 * print_int - prints an integer.
 * @args: argument pointer
 * Return: i
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int x;
	int i = 0;
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		i++;
	}
	x = n;
	while ((x / d) > 9)
		d = d * 10;
	while (d > 0)
	{
		_putchar(x / d + '0');
		x = x % d;
		d = d / 10;
		i++;
	}
	return (i);
}
