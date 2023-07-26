#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/* printf functions */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;
	char c;
	const char *s;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					putchar(c);
					count++;
					break;
				case 's':
					s = va_arg(args, const char *);
					while (*s)
					{
						putchar(*s);
						s++;
						count++;
					}
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					putchar('%');
					putchar(*format);
					count += 2;
					break;
			}
		} else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (0);
}
int main(void)
{
	int num = 123;
	char ch = 'X';
	const char *str = "Gregor, Grace!";
	int chars_printed = _printf
		("Integer: %d\nCharacter: %c\nString: %s\n%%\n", num, ch, str);
	printf("\nNumber of characters printed: %d\n", chars_printed);
	return (0);
}

