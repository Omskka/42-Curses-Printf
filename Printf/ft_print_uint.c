/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:47:18 by okirca            #+#    #+#             */
/*   Updated: 2022/12/01 21:11:50 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int a)
{
	int	count;
	int	i;

	count = a;
	i = 0;
	if (a > 9)
		ft_print_uint(a / 10);
	ft_putchar(a % 10 + '0');
	if (a == 0)
	{
		return (1);
	}
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}
