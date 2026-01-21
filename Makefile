# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/17 01:12:10 by amoufakk          #+#    #+#              #
#    Updated: 2026/01/21 22:28:01 by amoufakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c ft_putchar.c ft_puthexanumber.c ft_putnumber.c ft_putstring.c ft_putpointer.c ft_putunsignedint.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

all:$(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@  

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re:fclean $(NAME)

.PHONY:clean fclean all re