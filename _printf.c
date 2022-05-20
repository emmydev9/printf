#include "main.h"

/**
* _printf - print three format
* @format: supported format
* Return: int
**/
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0, k = 0;
	va_list ptr;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(ptr, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_buf(buffer, k), free(buffer), va_end(ptr);
				return (-1);
			}
			else
			{
				function = get(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handl_buf(buffer, format[i], k), j++, i--;
				}
				else
					j += function(ptr, buffer, k), i += env(format, i + 1);
			} i++;
		}
		else
			handl_buf(buffer, format[i], k), j++;
		for (k = j; k > 1024; k -= 1024)
			;
	}
	print_buf(buffer, k), free(buffer), va_end(ptr);
	return (j);
}
