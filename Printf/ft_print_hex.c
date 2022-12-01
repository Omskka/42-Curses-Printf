/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:15:22 by okirca            #+#    #+#             */
/*   Updated: 2022/12/01 21:15:42 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_h(unsigned int num, const char format)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		ft_print_h(num / 16, format);
		ft_print_h(num % 16, format);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar(num +48);
		}
		else
		{
			if (format == 'x')
				ft_putchar((num -10) + 'a');
			if (format == 'X')
				ft_putchar((num - 10) + 'A');
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	int	i;

	i = 0;
	ft_print_h(num, format);
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}
