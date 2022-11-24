/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:11:00 by okirca            #+#    #+#             */
/*   Updated: 2022/11/24 20:19:03 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_len;

	print_len = 0;
	i = 0;

	va_start(str, args);

	while (str[i])
	{
		if (str[i] == "%")
		{
			print_len += ft_formats(args, str, (i + 1));
				i++;
		}
		else
		{
			print_len += ft_printchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (print_len);
}

int	main()
{
	
	printf("%d", ft_printf("hello"));

}
