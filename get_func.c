#include"main.h"
/**
 * print - print a formated string
 * @format: string to print
 * @funcs: functions
 * @args: argument
 * Return: count
 */
int print(const char *format, convert_t funcs[], va_list args)
{
	int i, s, fvalue;
	int count = 0;

		for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (s = 0; funcs[s].sym != NULL; s++)
			{
				if (format[i + 1] == funcs[s].sym[0])
				{
					fvalue = funcs[s].f(args);
					if (fvalue == -1)
						return (-1);
					count += fvalue;
					break;
				}
			}
			if (funcs[s].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
