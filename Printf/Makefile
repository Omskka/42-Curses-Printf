# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okirca <okirca@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 17:19:03 by okirca            #+#    #+#              #
#    Updated: 2022/12/01 20:31:07 by okirca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c \
					ft_print_int.c \
					ft_itoa.c \
					ft_print_str.c\
					ft_print_uint.c\
					ft_print_hex.c\
					ft_print_ptr.c
					
					

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re