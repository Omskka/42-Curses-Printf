/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:50:01 by okirca            #+#    #+#             */
/*   Updated: 2022/12/01 21:00:57 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_add(unsigned long long num1)
{
	if (num1 >= 16)
	{
		ft_print_add(num1 / 16);
		ft_print_add(num1 % 16);
	}
	else
	{
		if (num1 <= 9)
		{
			ft_putchar(num1 +48);
		}
		else
		{
			ft_putchar((num1 - 10) + 'a');
		}
	}
}

int	ft_print_ptr(unsigned long long num)
{
	int	i;

	i = 0;
	write(1, "0x", 2);
	if (num == 0)
	{
		write(1, "0" ,1);
		return (3);
	}
	ft_print_add(num);

	while (num > 0)
	{
		num = num / 16;
		i++;
	}
	return (i + 2);
}
