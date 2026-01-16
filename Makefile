# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agomoham <agomoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 20:27:09 by agomoham          #+#    #+#              #
#    Updated: 2025/11/12 00:27:46 by agomoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	 =	ft_printf.c ft_putchar.c ft_puthexanumber.c ft_putnumber.c ft_putstring.c ft_putpointer.c ft_putunsignedint.c


OBJS		=	$(SRCS:.c=.o)

CC			=	cc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o: 			%.c ft_printf.h
				$(CC) $(CFLAGS) -c $< -o $@  
clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY: clean fclean all re 