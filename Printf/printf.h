/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:59:10 by okirca            #+#    #+#             */
/*   Updated: 2022/11/29 17:46:42 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

char	*ft_itoa(int n);
int		ft_print_int(int num);
int		ft_putchar(int c);
int		ft_print_str(char *str);

#endif
