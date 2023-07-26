#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
{
int count = 0;
	va_list args;

va_start(args, format);
for (const char *ptr = format; *ptr != '\0'; ptr++)
{
	if (*ptr != '%')
	{
		_putchar(*ptr);
		count++;
	}
	else
	{
		break;
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
		case 'd':
		case 'i':
		{
			int num = va_arg(args, int);
			int num_copy = num;
			int num_digits = 0;

			if (num_copy < 0)
			{
				_putchar('-');
				count++;
				num_copy = -num_copy;
			}
			do {
			num_digits++;
			num_copy /= 10;
			} while (num_copy != 0);

			for (int i = 0; i < num_digits; i++)
			{
				int digit = num % 10;
		_putchar('0' + digit);
		count++;
		num /= 10
			}
			break;
		}
		default:
		_putchar('%');
		_putchar(*ptr);
		count += 2;
		break;
	}
}
}

va_end(args);
return (count);
}
