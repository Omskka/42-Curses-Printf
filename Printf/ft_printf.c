/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:11:00 by okirca            #+#    #+#             */
/*   Updated: 2022/12/01 21:04:58 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char *format, int i)
{
	int	print_length;

	print_length = 0;
	if (format[i] == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (format[i] == 's')
		print_length += ft_print_str(va_arg(args, char *));
	else if (format[i] == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format[i] == 'd')
		print_length += ft_print_int(va_arg(args, int));
	else if (format[i] == 'i')
		print_length += ft_print_int(va_arg(args, int));
	else if (format[i] == 'u')
		print_length += ft_print_uint(va_arg(args, unsigned int));
	else if (format[i] == 'x')
		print_length += ft_print_hex(va_arg(args, unsigned int), format[i]);
	else if (format[i] == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format[i]);
	else if (format[i] == '%')
		print_length += write(1, "%", 1);
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_len;

	print_len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_formats(args, str, (i + 1));
				i++;
		}
		else
		{
			print_len += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (print_len);
}

