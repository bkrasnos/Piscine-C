# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 09:08:51 by bkrasnos          #+#    #+#              #
#    Updated: 2022/03/29 09:16:59 by bkrasnos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/do-op.c srcs/ft_add.c srcs/ft_sub.c srcs/ft_mul.c srcs/ft_mod.c srcs/ft_atoi.c srcs/ft_div.c srcs/ft_putnbr.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS}  ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
