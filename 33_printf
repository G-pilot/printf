#include <stdio.h>
#include <stdarg.h>
int _putchar(char c);

int _printf(const char *format, ...);
	va_list args;

	va_start(args, format);
	int count = 0;

	for (const char *ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
	{
		_putchar(*ptr);
	count++;
	}
		else
	{
		ptr++;
	switch (*ptr)
		{
		case 'c':
			{
				char ch = va_arg(args, int);

			_putchar(ch);
			count++;
			break;
	}
		case 's':
		{
		const char *str = va_arg(args, const char*);
			for (; *str != '\0'; str++)
			{
				_putchar(*str);
			count++;
			}
			break;
		}
		case '%':
		_putchar('%');
		count++;
		break;
		default:
	_putchar('%');
	print == ('%');
	_putchar(*ptr);
	count += 2;
	break;
		}
	}
}
	va_end(args);
	return (count);
}
