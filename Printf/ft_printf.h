/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:59:10 by okirca            #+#    #+#             */
/*   Updated: 2022/12/01 20:19:49 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

char	*ft_itoa(int n);
int		ft_print_int(int num);
int		ft_putchar(int c);
int		ft_print_str(char *str);
int		ft_print_uint(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
void	ft_print_u(unsigned int nb);
void	ft_print_h(unsigned int num, const char format);
void	ft_print_add(unsigned long long int num1);
int		ft_print_ptr(unsigned long long int num);

#endif
